/****************************************************************************
** Meta object code from reading C++ file 'joint_control_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/arms_ros2_control/command/arms_rviz_control_plugin/include/arms_rviz_control_plugin/joint_control_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joint_control_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel_t {
    QByteArrayData data[18];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel_t qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 43), // "arms_rviz_control_plugin::Joi..."
QT_MOC_LITERAL(1, 44, 19), // "onSendButtonClicked"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 17), // "onCategoryChanged"
QT_MOC_LITERAL(4, 83, 27), // "onWaistLiftingSliderChanged"
QT_MOC_LITERAL(5, 111, 5), // "value"
QT_MOC_LITERAL(6, 117, 27), // "onWaistTurningSliderChanged"
QT_MOC_LITERAL(7, 145, 20), // "onDisplayUnitChanged"
QT_MOC_LITERAL(8, 166, 17), // "onPoseModeChanged"
QT_MOC_LITERAL(9, 184, 16), // "onWaistUpPressed"
QT_MOC_LITERAL(10, 201, 17), // "onWaistUpReleased"
QT_MOC_LITERAL(11, 219, 18), // "onWaistDownPressed"
QT_MOC_LITERAL(12, 238, 19), // "onWaistDownReleased"
QT_MOC_LITERAL(13, 258, 18), // "onWaistLeftPressed"
QT_MOC_LITERAL(14, 277, 19), // "onWaistLeftReleased"
QT_MOC_LITERAL(15, 297, 19), // "onWaistRightPressed"
QT_MOC_LITERAL(16, 317, 20), // "onWaistRightReleased"
QT_MOC_LITERAL(17, 338, 20) // "onWaistRepeatTimeout"

    },
    "arms_rviz_control_plugin::JointControlPanel\0"
    "onSendButtonClicked\0\0onCategoryChanged\0"
    "onWaistLiftingSliderChanged\0value\0"
    "onWaistTurningSliderChanged\0"
    "onDisplayUnitChanged\0onPoseModeChanged\0"
    "onWaistUpPressed\0onWaistUpReleased\0"
    "onWaistDownPressed\0onWaistDownReleased\0"
    "onWaistLeftPressed\0onWaistLeftReleased\0"
    "onWaistRightPressed\0onWaistRightReleased\0"
    "onWaistRepeatTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_arms_rviz_control_plugin__JointControlPanel[] = {

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
       4,    1,   91,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
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

       0        // eod
};

void arms_rviz_control_plugin::JointControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JointControlPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSendButtonClicked(); break;
        case 1: _t->onCategoryChanged(); break;
        case 2: _t->onWaistLiftingSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onWaistTurningSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onDisplayUnitChanged(); break;
        case 5: _t->onPoseModeChanged(); break;
        case 6: _t->onWaistUpPressed(); break;
        case 7: _t->onWaistUpReleased(); break;
        case 8: _t->onWaistDownPressed(); break;
        case 9: _t->onWaistDownReleased(); break;
        case 10: _t->onWaistLeftPressed(); break;
        case 11: _t->onWaistLeftReleased(); break;
        case 12: _t->onWaistRightPressed(); break;
        case 13: _t->onWaistRightReleased(); break;
        case 14: _t->onWaistRepeatTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject arms_rviz_control_plugin::JointControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel.data,
    qt_meta_data_arms_rviz_control_plugin__JointControlPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *arms_rviz_control_plugin::JointControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *arms_rviz_control_plugin::JointControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_arms_rviz_control_plugin__JointControlPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int arms_rviz_control_plugin::JointControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
