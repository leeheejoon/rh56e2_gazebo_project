# Modbus ROS2 Control

Modbus / RS485 방식의 범용 ROS 2 Control 엔드이펙터 하드웨어 인터페이스입니다. 그리퍼와 여러 종류의 로봇손을 지원합니다.

이 문서는 [원본 README](README.md)의 한국어 번역입니다. 명령어와 설정값은 원본에 나온 그대로입니다.

## 1. 지원하는 엔드이펙터

이 패키지는 **7개**의 `hardware_interface` 플러그인을 등록합니다. 전체 목록은 `modbus_ros2_control.xml`을 참고하세요.

| 플러그인 | 제품 | 구분 및 설정 방법 |
|---|---|---|
| **`ModbusHardware`** | Changingtek AG2F90 | `gripper_type:=changingtek`, `variant:=90c` / `90d` |
| **`DexterousHandHardware`** | LinkerHand **O7** | URDF 관절 7개 |
| | LinkerHand **O6** | URDF 관절 6개 (기본값) |
| | LinkerHand **L6** | `hand_type`에 `L6` 포함 |
| | Freedom / Inspire | **미지원** — 초기화에 실패하므로 각 제품의 전용 플러그인을 사용 |
| **`InspireHandHardware`** | Inspire **RH56 시리즈** (E2 / F2) | URDF 관절 6개; Modbus RTU (FC03/FC10); 관절 한계값은 RH56E2 값으로 고정 |
| **`FreedomRS485Hardware`** | Freedom **V1** / **V2** | `protocol_version:=auto` / `freedomv1` / `freedomv2` (또는 관절 개수로 추정) |
| **`XHand1RS485Hardware`** | **XHand1** | URDF 관절 12개; 전용 RS485 (기본 3 Mbps) |
| **`TheoHandModbusHardware`** | TheoHand **STD16A** | URDF 관절 16개; 표준 Modbus RTU (기본 115200 8N1) |
| **`Kwr75ForceTorqueSensor`** | **KWR75** 6축 힘/토크 센서 | `type="sensor"`; 전용 RS485 (기본 2.5 Mbps) |

**Inspire 제품에는 `InspireHandHardware`를 사용하세요.**

- `hand_type`에 `INSPIRE` 또는 `RH56`이 포함되면 `DexterousHandHardware`는 초기화를 거부합니다.
- USB 연결에는 `inspire_description`의 `inspire_rs485_side_system` 매크로를 사용하세요. [3.3절](#33-inspire-rh56-inspirehandhardware)을 참고하세요.

전체 관절 정의를 직접 작성하기보다 로봇 description 패키지에서 xacro 매크로로 연결하는 것을 권장합니다. [3절](#3-설정-참고)을 참고하세요.

## 2. 코드 구조

```text
modbus_ros2_control/
├── communicator/
│   └── ModbusRtuCommunicator          # libmodbus를 감싼 통신 코드
├── grippers/
│   ├── ModbusGripperBase
│   └── ChangingtekGripper             # ModbusHardware
├── hands/
│   ├── linkerhand/                    # DexterousHandHardware
│   ├── inspire/                       # InspireHandHardware
│   ├── freedom/                       # FreedomRS485Hardware
│   ├── theo/                          # TheoHandModbusHardware
│   └── xhand1/                        # XHand1RS485Hardware
├── sensors/
│   └── kwr75_force_torque_sensor.cpp  # Kwr75ForceTorqueSensor
├── modbus_hardware.cpp                # 그리퍼 플러그인 진입점
└── modbus_ros2_control.xml            # 플러그인 목록
```

그리퍼 관련 코드와 LinkerHand의 `DexterousHandHardware`는 `gripper_hardware_common`을 재사용합니다. `InspireHandHardware`의 통신 프로토콜은 이 패키지 안에 독립적으로 구현되어 있으며, `marvin_ros2_control`에도 별도 구현이 있습니다. [9절](#9-할-일)을 참고하세요.

## 3. 설정 참고

관절 인터페이스는 각 `*_description` 패키지에 정의되어 있습니다. 여기서는 하드웨어 플러그인과 주요 매개변수만 보여줍니다. 전체 관절 목록을 사용하려면 해당 xacro 파일을 포함하세요.

### 3.1 Changingtek 그리퍼 (`ModbusHardware`)

```xml
<ros2_control name="ModbusGripperSystem" type="system">
  <hardware>
    <plugin>modbus_ros2_control/ModbusHardware</plugin>
    <param name="gripper_type">changingtek</param>
    <param name="variant">90c</param>
    <!-- 선택 사항: serial_port, slave_id, baudrate -->
  </hardware>
  <joint name="gripper_joint">
    <command_interface name="position"/>
    <state_interface name="position"/>
    <state_interface name="velocity"/>
    <state_interface name="effort"/>
  </joint>
</ros2_control>
```

### 3.2 LinkerHand (`DexterousHandHardware`)

```xml
<ros2_control name="linkerhand_right_system" type="system">
  <hardware>
    <plugin>modbus_ros2_control/DexterousHandHardware</plugin>
    <param name="serial_port">/dev/ttyUSB0</param>
    <param name="hand_side">right</param>
    <param name="hand_type">linkerhand_o7</param>
  </hardware>
  <!-- linkerhand_description의 xacro 매크로를 포함합니다. 예: linkerhand_o7_interfaces -->
</ros2_control>
```

참고: `linkerhand_description/xacro/ros2_control/hand.xacro` (단일 팔 launch), 각 로봇의 `robot.xacro`에 있는 `side_usb_hand_system`.

### 3.3 Inspire RH56 (`InspireHandHardware`)

```xml
<!-- inspire_description의 매크로를 직접 사용하는 것을 권장합니다 -->
<xacro:inspire_rs485_side_system side="left" serial_port="/dev/ttyUSB0" hand_type="inspire_f2"/>
```

매크로 정의: `inspire_description/xacro/ros2_control/side_systems.xacro`  
단일 팔 예제: `inspire_description/xacro/ros2_control/hand.xacro`

### 3.4 Freedom / XHand1

```xml
<xacro:freedom_rs485_side_system side="left" serial_port="/dev/ttyUSB0" type="freedomv2"/>
<xacro:xhand1_rs485_side_system side="left" serial_port="/dev/ttyUSB1"/>
```

매크로는 `freedom_description`과 `xhand1_description`의 `xacro/ros2_control/side_systems.xacro`에 정의되어 있습니다.

### 3.5 TheoHand STD16A (`TheoHandModbusHardware`)

```xml
<ros2_control name="theohand_system" type="system">
  <hardware>
    <plugin>modbus_ros2_control/TheoHandModbusHardware</plugin>
    <param name="serial_port">/dev/ttyUSB0</param>
    <param name="baudrate">115200</param>
    <param name="slave_id">2</param>
  </hardware>
  <!-- theohand_description/xacro/ros2_control/std16a.xacro를 포함합니다 -->
</ros2_control>
```

플러그인은 공식 `wn_hand_sdk-develop_modbus` 데모에 따라 활성화할 때 제어 워드 `0x0f`를 씁니다. 현재 STD16A는 전달받은 `slave_id`로 직접 통신하며, 활성화 단계에서 왼손/오른손 레지스터를 읽지 않습니다.

### 3.6 KWR75 6축 힘/토크 센서 (`Kwr75ForceTorqueSensor`)

`m6_ccs_description/xacro/ros2_control/ft_sensor_systems.xacro`에서 실제 하드웨어 설정에 따라 자동으로 연결됩니다 (`external_ee_systems`와 같은 방식).

```xml
<xacro:ft_sensor_systems
  usb_left_ft_port="$(arg usb_left_ft_port)"
  usb_right_ft_port="$(arg usb_right_ft_port)"/>
```

시리얼 포트는 `robot.local.yaml`의 `hardware.usb_left_ft_port`에서 바꾸거나 launch에 `hardware_usb_left_ft_port:=/dev/ttyUSB1`을 전달해 바꿀 수 있습니다.

플러그인은 ros2_control 상태 인터페이스 (`kwr75_{left|right}_ft/force.x` 등)를 제공하고, 상위 컨트롤러가 구독할 수 있도록 `/left_arm_external_wrench`와 `/right_arm_external_wrench`에 `WrenchStamped`를 발행합니다. `MarvinHardware`는 이 토픽을 구독하지 않습니다. 포트를 사용할 수 없거나 읽기에 실패하면 모든 값으로 0을 출력합니다.

프로토콜은 Kunwei 공식 SDK (`kwcapture.h`, `linkMode=0`, `decodeMode=0`, `kwStartCapture`)와 같습니다. 활성화 시 `0x48 0xAA 0x0D 0x0A`를 한 번 보내 1 kHz 연속 데이터 전송을 시작합니다. 이후에는 시리얼 버퍼의 최신 28바이트 프레임만 읽고, 매 주기마다 버퍼를 비우거나 명령을 다시 보내지 않습니다.

## 4. 하드웨어 매개변수

| 플러그인 | 매개변수 | 기본값 | 설명 |
|---|---|---|---|
| **ModbusHardware** | `gripper_type` | `changingtek` | 필수 |
| | `variant` | `90c` | `90c` / `90d` |
| | `serial_port` | `/dev/ttyUSB0` | |
| | `slave_id` | `1` | |
| | `baudrate` | `115200` | |
| **DexterousHandHardware** | `serial_port` | — | 필수 |
| | `hand_side` | `right` | `left` / `right`; 왼쪽 `0x28`, 오른쪽 `0x27` |
| | `hand_type` | `simple_dexterous_hand` | O6 / L6 구분; `INSPIRE` / `RH56`이 포함되면 거부 |
| | `left_tool_torque` / `right_tool_torque` | `1.0` | 해당 측 LinkerHand 장치의 토크 비율, 범위 `[0, 1]` |
| | `left_tool_velocity` / `right_tool_velocity` | `1.0` | 해당 측 LinkerHand 장치의 속도 비율, 범위 `[0, 1]` |
| | `response_timeout_ms` | `20` | Modbus 응답 제한 시간 |
| | `byte_timeout_ms` | `5` | Modbus 바이트 간 제한 시간 |
| | 시리얼 포트 형식 | 고정 | 115200 8N1 |
| **InspireHandHardware** | `serial_port` | `/dev/ttyUSB0` | |
| | `hand_side` | `left` | `slave_id:=auto`일 때 왼손 `2`, 오른손 `1` |
| | `slave_id` | `auto` | |
| | `baudrate` | `115200` | |
| | `read_feedback` | `true` | |
| **FreedomRS485Hardware** | `protocol_version` | `auto` | `freedomv1` / `freedomv2` |
| | `serial_port` | `/dev/ttyUSB0` | |
| | `hand_side` | — | |
| | `command_speed` | `100` | |
| **XHand1RS485Hardware** | `serial_port` | `/dev/ttyUSB0` | |
| | `baudrate` | `3000000` | |
| | `hand_id` / `host_id` | `0` / `0xFE` | |
| | `kp` / `ki` / `kd` | `100` / `0` / `0` | 각 프레임과 함께 전송 |
| | `torque_limit` | `300` | 기본 토크 상한, 범위 `[0, 300]` |
| | `tool_torque` | `0.8` | 토크 비율 `ratio`, 범위 `[0, 1]`; 전송값은 `round(torque_limit × ratio)`, 기본값은 `round(300 × ratio)` |
| | `tool_velocity` | `0.0` | 기본적으로 속도 제한 없음. `0 < ratio <= 1`이면 비율에 따라 속도를 제한; 유한한 값 `ratio <= 0`이면 제한 없이 목표 위치를 직접 전송 (관절 위치 제한은 유지). 음수는 내부적으로 0으로 바뀌며 실행 중 수정 가능 |
| | FTDI USB 버퍼 타이머 | `1 ms` | 포트를 열 때 자동 설정하고 읽어서 검증; 시리얼 심볼릭 링크 지원; 속성이 없으면 건너뛰고 쓰기 권한이 없으면 경고 후 계속 |
| **TheoHandModbusHardware** | `serial_port` | `/dev/ttyUSB0` | |
| | `baudrate` | `115200` | 프로토콜 6.1: RS485 115200 8N1 |
| | `slave_id` | 왼쪽 `2`, 오른쪽 `1` | 장치 주소에 맞게 변경 가능 |
| | `read_feedback` | `true` | `0x0051`부터 실제 위치 16개를 읽음; 끄면 RViz에 명령 위치 표시 |
| **Kwr75ForceTorqueSensor** | `serial_port` | `/dev/ttyUSB0` | USB-RS485 변환기 |
| | `baudrate` | `115200` | 8N1, Kunwei SDK의 `decodeMode=0`과 일치 |
| | `command_code` | `72` (`0x48`) | 연속 수집 시작 명령의 첫 바이트; 일부 장치는 `0x49` |
| | `convert_to_si` | `true` | kg→N, kg·m→N·m |
| | `response_timeout_ms` | `50` | 한 번의 데이터 읽기 제한 시간 (ms) |
| | `startup_delay_ms` | `50` | 시작 명령을 보낸 후 첫 프레임을 기다리는 시간 (ms) |
| | `warmup_attempts` | `20` | 활성화할 때 연결 확인 재시도 횟수 |

이 패키지가 직접 관리하는 모든 USB-RS485 시리얼 포트는 연결할 때 기본적으로 `latency_timer`를 **1 ms**로 설정하고 값을 다시 읽어 검증합니다. 이 기능은 Modbus RTU 경로 (LinkerHand, Inspire, TheoHand, ChangingTek, Jodell 등), Freedom, XHand1 및 KWR75 시리얼 센서에 적용됩니다. 다시 연결할 때도 실행됩니다.

`/dev/serial/by-id/...` 같은 심볼릭 링크도 지원합니다. `latency_timer` 속성이 없는 어댑터와 기본 시리얼 포트는 건너뜁니다. sysfs 쓰기 권한이 없으면 경고 후 통신을 계속하며, 자동으로 권한을 높이지 않습니다. 일반 사용자에게 장치 재연결 후에도 자동으로 적용하려면 시스템 udev 권한을 설정하거나 시스템에서 해당 속성을 설정해야 합니다. 이 설정은 USB 수신 버퍼를 조정하며, 통신 속도, 프로토콜 제한 시간 또는 장치 내부 제어 주파수는 바꾸지 않습니다.

## 5. 위치 단위

| 엔드이펙터 | ROS2 Control 인터페이스 | 장치 프로토콜 |
|---|---|---|
| Changingtek 그리퍼 | 0.0 (닫힘) ~ 1.0 (열림) | 0–9000 (0=열림, 9000=닫힘) |
| LinkerHand O6/O7 | 0.0 ~ 1.0 (굽힘 → 펴짐) | 0–255 |
| Inspire RH56 | 라디안 (rad) | 레지스터 원시값 약 500–1750 |
| Freedom / XHand1 | 라디안 (rad) | 각 프로토콜에 따라 매핑 |
| TheoHand STD16A | 라디안 / 미터 (URDF 관절 한계에 맞춰 정규화) | 0–9000 (프로토콜 위치 단위는 약 0.01도) |

## 6. 빌드와 의존성

**시스템 의존성**

```bash
sudo apt-get install libmodbus-dev
sudo apt-get install ros-${ROS_DISTRO}-controller-manager \
                     ros-${ROS_DISTRO}-joint-state-broadcaster \
                     ros-${ROS_DISTRO}-position-controllers
```

**빌드**

```bash
cd ~/ros2_ws
colcon build --packages-up-to modbus_ros2_control --symlink-install
source install/setup.bash
```

**ROS 패키지 의존성**: `hardware_interface`, `pluginlib`, `rclcpp`, `rclcpp_lifecycle`, `gripper_hardware_common`, `arms_controller_common`.

## 7. 실행 예제

아래는 LinkerHand O7을 단독으로 점검하는 예제입니다 (`basic_joint_controller` + `linkerhand_description`).

```bash
# 시리얼 포트 권한 (둘 중 하나 선택)
sudo usermod -a -G dialout $USER && newgrp dialout
# 또는: sudo chmod 666 /dev/ttyUSB0

# 실행
ros2 launch basic_joint_controller hand.launch.py \
  hand:=linkerhand type:=o7 hardware:=real direction:=1

# 명령 보내기 / 상태 확인
ros2 topic pub /hand_joint_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5]}"
ros2 topic echo /joint_states
ros2 control list_controllers
```

Inspire 손 단독 실행에는 `inspire_description`과 `hand.launch.py` (`hardware:=real`)를 사용합니다. 양팔 로봇은 각 로봇 description의 `robot.xacro`와 launch 파일을 참고하세요.

직접 launch를 작성할 때의 핵심 순서: xacro로 URDF 생성 → `ros2_control_node` → `joint_state_broadcaster`와 위치 컨트롤러 로드. `basic_joint_controller/launch/hand.launch.py`를 참고할 수 있습니다.

## 8. 새 그리퍼 추가

1. `ModbusGripperBase`를 상속하여 프로토콜 읽기와 쓰기를 구현합니다.
2. `ModbusHardware::on_init()`에서 `gripper_type`에 따라 객체를 생성합니다.
3. `modbus_ros2_control.xml`에 등록합니다. 새로운 `SystemInterface`라면 별도의 플러그인 클래스를 만듭니다.

## 9. 할 일

- [ ] **Inspire 프로토콜 공통 계층 추출** — `InspireHandHardware`와 `marvin_ros2_control::InspireHandE2` 및 CAN FD 변형이 같은 레지스터 프로토콜을 각각 구현하며, `gripper_hardware_common`을 재사용하지 않습니다. 이후 Marvin / modbus / can이 공유하도록 공통 계층으로 분리합니다.
- [ ] **RH56F2 관절 한계** — `InspireHandHardware`의 관절 상한이 여전히 RH56E2 값으로 고정되어 있습니다. 실제 F2에서는 모델별로 구분하거나 URDF에서 읽어야 합니다.
