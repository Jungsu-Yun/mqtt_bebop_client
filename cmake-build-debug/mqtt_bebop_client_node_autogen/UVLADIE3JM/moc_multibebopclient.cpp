/****************************************************************************
** Meta object code from reading C++ file 'multibebopclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/multibebopclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multibebopclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiBebopClient_t {
    QByteArrayData data[13];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiBebopClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiBebopClient_t qt_meta_stringdata_MultiBebopClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MultiBebopClient"
QT_MOC_LITERAL(1, 17, 12), // "receiveFrame"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "frame"
QT_MOC_LITERAL(4, 37, 14), // "receiveBattery"
QT_MOC_LITERAL(5, 52, 7), // "battery"
QT_MOC_LITERAL(6, 60, 32), // "on_single_control_button_clicked"
QT_MOC_LITERAL(7, 93, 32), // "on_server_control_button_clicked"
QT_MOC_LITERAL(8, 126, 31), // "on_start_roscore_button_clicked"
QT_MOC_LITERAL(9, 158, 28), // "on_start_node_button_clicked"
QT_MOC_LITERAL(10, 187, 25), // "on_takeoff_button_clicked"
QT_MOC_LITERAL(11, 213, 22), // "on_land_button_clicked"
QT_MOC_LITERAL(12, 236, 23) // "on_start_button_clicked"

    },
    "MultiBebopClient\0receiveFrame\0\0frame\0"
    "receiveBattery\0battery\0"
    "on_single_control_button_clicked\0"
    "on_server_control_button_clicked\0"
    "on_start_roscore_button_clicked\0"
    "on_start_node_button_clicked\0"
    "on_takeoff_button_clicked\0"
    "on_land_button_clicked\0on_start_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiBebopClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiBebopClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiBebopClient *_t = static_cast<MultiBebopClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->receiveBattery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_single_control_button_clicked(); break;
        case 3: _t->on_server_control_button_clicked(); break;
        case 4: _t->on_start_roscore_button_clicked(); break;
        case 5: _t->on_start_node_button_clicked(); break;
        case 6: _t->on_takeoff_button_clicked(); break;
        case 7: _t->on_land_button_clicked(); break;
        case 8: _t->on_start_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MultiBebopClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MultiBebopClient.data,
      qt_meta_data_MultiBebopClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiBebopClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiBebopClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiBebopClient.stringdata0))
        return static_cast<void*>(const_cast< MultiBebopClient*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MultiBebopClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
