/****************************************************************************
** Meta object code from reading C++ file 'testbench.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/testbench.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testbench.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CTestbench_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTestbench_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTestbench_t qt_meta_stringdata_CTestbench = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CTestbench"
QT_MOC_LITERAL(1, 11, 7), // "OnTimer"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "OnSendProtMessage"
QT_MOC_LITERAL(4, 38, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(5, 55, 10) // "vecMessage"

    },
    "CTestbench\0OnTimer\0\0OnSendProtMessage\0"
    "CVector<uint8_t>\0vecMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTestbench[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void CTestbench::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CTestbench *_t = static_cast<CTestbench *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTimer(); break;
        case 1: _t->OnSendProtMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CTestbench::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTestbench.data,
      qt_meta_data_CTestbench,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CTestbench::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTestbench::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CTestbench.stringdata0))
        return static_cast<void*>(const_cast< CTestbench*>(this));
    return QObject::qt_metacast(_clname);
}

int CTestbench::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
