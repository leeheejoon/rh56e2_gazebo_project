/****************************************************************************
** Meta object code from reading C++ file 'ocs2_fsm_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/arms_ros2_control/command/arms_rviz_control_plugin/include/arms_rviz_control_plugin/ocs2_fsm_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ocs2_fsm_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel_t {
    QByteArrayData data[18];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel_t qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel = {
    {
QT_MOC_LITERAL(0, 0, 38), // "arms_rviz_control_plugin::OCS..."
QT_MOC_LITERAL(1, 39, 12), // "onHomeToHold"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 12), // "onHoldToOCS2"
QT_MOC_LITERAL(4, 66, 12), // "onOCS2ToHold"
QT_MOC_LITERAL(5, 79, 12), // "onHoldToHome"
QT_MOC_LITERAL(6, 92, 13), // "onHoldToMoveJ"
QT_MOC_LITERAL(7, 106, 13), // "onMoveJToHold"
QT_MOC_LITERAL(8, 120, 12), // "onSwitchPose"
QT_MOC_LITERAL(9, 133, 20), // "onSwitchPoseReleased"
QT_MOC_LITERAL(10, 154, 13), // "onBaseToggled"
QT_MOC_LITERAL(11, 168, 17), // "onBimanualToggled"
QT_MOC_LITERAL(12, 186, 16), // "onLeftArmToggled"
QT_MOC_LITERAL(13, 203, 17), // "onRightArmToggled"
QT_MOC_LITERAL(14, 221, 17), // "onBodyModeChanged"
QT_MOC_LITERAL(15, 239, 5), // "index"
QT_MOC_LITERAL(16, 245, 17), // "onHeadModeChanged"
QT_MOC_LITERAL(17, 263, 25) // "onHomePoseTrackingToggled"

    },
    "arms_rviz_control_plugin::OCS2FSMPanel\0"
    "onHomeToHold\0\0onHoldToOCS2\0onOCS2ToHold\0"
    "onHoldToHome\0onHoldToMoveJ\0onMoveJToHold\0"
    "onSwitchPose\0onSwitchPoseReleased\0"
    "onBaseToggled\0onBimanualToggled\0"
    "onLeftArmToggled\0onRightArmToggled\0"
    "onBodyModeChanged\0index\0onHeadModeChanged\0"
    "onHomePoseTrackingToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_arms_rviz_control_plugin__OCS2FSMPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

       0        // eod
};

void arms_rviz_control_plugin::OCS2FSMPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OCS2FSMPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onHomeToHold(); break;
        case 1: _t->onHoldToOCS2(); break;
        case 2: _t->onOCS2ToHold(); break;
        case 3: _t->onHoldToHome(); break;
        case 4: _t->onHoldToMoveJ(); break;
        case 5: _t->onMoveJToHold(); break;
        case 6: _t->onSwitchPose(); break;
        case 7: _t->onSwitchPoseReleased(); break;
        case 8: _t->onBaseToggled(); break;
        case 9: _t->onBimanualToggled(); break;
        case 10: _t->onLeftArmToggled(); break;
        case 11: _t->onRightArmToggled(); break;
        case 12: _t->onBodyModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onHeadModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onHomePoseTrackingToggled(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject arms_rviz_control_plugin::OCS2FSMPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel.data,
    qt_meta_data_arms_rviz_control_plugin__OCS2FSMPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *arms_rviz_control_plugin::OCS2FSMPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *arms_rviz_control_plugin::OCS2FSMPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_arms_rviz_control_plugin__OCS2FSMPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int arms_rviz_control_plugin::OCS2FSMPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
