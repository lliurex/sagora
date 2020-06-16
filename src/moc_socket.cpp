/****************************************************************************
** Meta object code from reading C++ file 'socket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/socket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CSocket_t {
    QByteArrayData data[16];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSocket_t qt_meta_stringdata_CSocket = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CSocket"
QT_MOC_LITERAL(1, 8, 13), // "NewConnection"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "iChID"
QT_MOC_LITERAL(4, 29, 12), // "CHostAddress"
QT_MOC_LITERAL(5, 42, 11), // "RecHostAddr"
QT_MOC_LITERAL(6, 54, 10), // "ServerFull"
QT_MOC_LITERAL(7, 65, 21), // "InvalidPacketReceived"
QT_MOC_LITERAL(8, 87, 22), // "ProtcolMessageReceived"
QT_MOC_LITERAL(9, 110, 11), // "iRecCounter"
QT_MOC_LITERAL(10, 122, 6), // "iRecID"
QT_MOC_LITERAL(11, 129, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(12, 146, 16), // "vecbyMesBodyData"
QT_MOC_LITERAL(13, 163, 7), // "HostAdr"
QT_MOC_LITERAL(14, 171, 24), // "ProtcolCLMessageReceived"
QT_MOC_LITERAL(15, 196, 14) // "OnDataReceived"

    },
    "CSocket\0NewConnection\0\0iChID\0CHostAddress\0"
    "RecHostAddr\0ServerFull\0InvalidPacketReceived\0"
    "ProtcolMessageReceived\0iRecCounter\0"
    "iRecID\0CVector<uint8_t>\0vecbyMesBodyData\0"
    "HostAdr\0ProtcolCLMessageReceived\0"
    "OnDataReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       1,    2,   50,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    4,   61,    2, 0x06 /* Public */,
      14,    3,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 11, 0x80000000 | 4,    9,   10,   12,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, 0x80000000 | 4,   10,   12,   13,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSocket *_t = static_cast<CSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewConnection(); break;
        case 1: _t->NewConnection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CHostAddress(*)>(_a[2]))); break;
        case 2: _t->ServerFull((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 3: _t->InvalidPacketReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 4: _t->ProtcolMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[3])),(*reinterpret_cast< CHostAddress(*)>(_a[4]))); break;
        case 5: _t->ProtcolCLMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 6: _t->OnDataReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::NewConnection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CSocket::*_t)(int , CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::NewConnection)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CSocket::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::ServerFull)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CSocket::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::InvalidPacketReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CSocket::*_t)(int , int , CVector<uint8_t> , CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::ProtcolMessageReceived)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CSocket::*_t)(int , CVector<uint8_t> , CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSocket::ProtcolCLMessageReceived)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject CSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CSocket.data,
      qt_meta_data_CSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CSocket.stringdata0))
        return static_cast<void*>(const_cast< CSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int CSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CSocket::NewConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CSocket::NewConnection(int _t1, CHostAddress _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CSocket::ServerFull(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CSocket::InvalidPacketReceived(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CSocket::ProtcolMessageReceived(int _t1, int _t2, CVector<uint8_t> _t3, CHostAddress _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CSocket::ProtcolCLMessageReceived(int _t1, CVector<uint8_t> _t2, CHostAddress _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_CHighPrioSocket_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CHighPrioSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CHighPrioSocket_t qt_meta_stringdata_CHighPrioSocket = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CHighPrioSocket"
QT_MOC_LITERAL(1, 16, 21), // "InvalidPacketReceived"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "CHostAddress"
QT_MOC_LITERAL(4, 52, 11) // "RecHostAddr"

    },
    "CHighPrioSocket\0InvalidPacketReceived\0"
    "\0CHostAddress\0RecHostAddr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CHighPrioSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CHighPrioSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CHighPrioSocket *_t = static_cast<CHighPrioSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InvalidPacketReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CHighPrioSocket::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CHighPrioSocket::InvalidPacketReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CHighPrioSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CHighPrioSocket.data,
      qt_meta_data_CHighPrioSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CHighPrioSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CHighPrioSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CHighPrioSocket.stringdata0))
        return static_cast<void*>(const_cast< CHighPrioSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int CHighPrioSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CHighPrioSocket::InvalidPacketReceived(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
