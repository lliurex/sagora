/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CHighPrecisionTimer_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CHighPrecisionTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CHighPrecisionTimer_t qt_meta_stringdata_CHighPrecisionTimer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CHighPrecisionTimer"
QT_MOC_LITERAL(1, 20, 7), // "timeout"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "CHighPrecisionTimer\0timeout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CHighPrecisionTimer[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void CHighPrecisionTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CHighPrecisionTimer *_t = static_cast<CHighPrecisionTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CHighPrecisionTimer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CHighPrecisionTimer::timeout)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CHighPrecisionTimer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CHighPrecisionTimer.data,
      qt_meta_data_CHighPrecisionTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CHighPrecisionTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CHighPrecisionTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CHighPrecisionTimer.stringdata0))
        return static_cast<void*>(const_cast< CHighPrecisionTimer*>(this));
    return QThread::qt_metacast(_clname);
}

int CHighPrecisionTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void CHighPrecisionTimer::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_CServer_t {
    QByteArrayData data[44];
    char stringdata0[658];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CServer_t qt_meta_stringdata_CServer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CServer"
QT_MOC_LITERAL(1, 8, 7), // "Started"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "Stopped"
QT_MOC_LITERAL(4, 25, 18), // "ClientDisconnected"
QT_MOC_LITERAL(5, 44, 5), // "iChID"
QT_MOC_LITERAL(6, 50, 19), // "SvrRegStatusChanged"
QT_MOC_LITERAL(7, 70, 10), // "AudioFrame"
QT_MOC_LITERAL(8, 81, 8), // "stChName"
QT_MOC_LITERAL(9, 90, 12), // "CHostAddress"
QT_MOC_LITERAL(10, 103, 11), // "RecHostAddr"
QT_MOC_LITERAL(11, 115, 11), // "iNumAudChan"
QT_MOC_LITERAL(12, 127, 16), // "CVector<int16_t>"
QT_MOC_LITERAL(13, 144, 8), // "vecsData"
QT_MOC_LITERAL(14, 153, 7), // "OnTimer"
QT_MOC_LITERAL(15, 161, 15), // "OnNewConnection"
QT_MOC_LITERAL(16, 177, 12), // "OnServerFull"
QT_MOC_LITERAL(17, 190, 19), // "OnSendCLProtMessage"
QT_MOC_LITERAL(18, 210, 8), // "InetAddr"
QT_MOC_LITERAL(19, 219, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(20, 236, 10), // "vecMessage"
QT_MOC_LITERAL(21, 247, 26), // "OnProtcolCLMessageReceived"
QT_MOC_LITERAL(22, 274, 6), // "iRecID"
QT_MOC_LITERAL(23, 281, 16), // "vecbyMesBodyData"
QT_MOC_LITERAL(24, 298, 24), // "OnProtcolMessageReceived"
QT_MOC_LITERAL(25, 323, 11), // "iRecCounter"
QT_MOC_LITERAL(26, 335, 16), // "OnCLPingReceived"
QT_MOC_LITERAL(27, 352, 3), // "iMs"
QT_MOC_LITERAL(28, 356, 30), // "OnCLPingWithNumClientsReceived"
QT_MOC_LITERAL(29, 387, 16), // "OnCLSendEmptyMes"
QT_MOC_LITERAL(30, 404, 14), // "TargetInetAddr"
QT_MOC_LITERAL(31, 419, 17), // "OnCLReqServerList"
QT_MOC_LITERAL(32, 437, 19), // "OnCLReqVersionAndOS"
QT_MOC_LITERAL(33, 457, 22), // "OnCLReqConnClientsList"
QT_MOC_LITERAL(34, 480, 26), // "OnCLRegisterServerReceived"
QT_MOC_LITERAL(35, 507, 9), // "LInetAddr"
QT_MOC_LITERAL(36, 517, 15), // "CServerCoreInfo"
QT_MOC_LITERAL(37, 533, 10), // "ServerInfo"
QT_MOC_LITERAL(38, 544, 22), // "OnCLRegisterServerResp"
QT_MOC_LITERAL(39, 567, 13), // "ESvrRegResult"
QT_MOC_LITERAL(40, 581, 7), // "eResult"
QT_MOC_LITERAL(41, 589, 21), // "OnSvrRegStatusChanged"
QT_MOC_LITERAL(42, 611, 28), // "OnCLUnregisterServerReceived"
QT_MOC_LITERAL(43, 640, 17) // "OnCLDisconnection"

    },
    "CServer\0Started\0\0Stopped\0ClientDisconnected\0"
    "iChID\0SvrRegStatusChanged\0AudioFrame\0"
    "stChName\0CHostAddress\0RecHostAddr\0"
    "iNumAudChan\0CVector<int16_t>\0vecsData\0"
    "OnTimer\0OnNewConnection\0OnServerFull\0"
    "OnSendCLProtMessage\0InetAddr\0"
    "CVector<uint8_t>\0vecMessage\0"
    "OnProtcolCLMessageReceived\0iRecID\0"
    "vecbyMesBodyData\0OnProtcolMessageReceived\0"
    "iRecCounter\0OnCLPingReceived\0iMs\0"
    "OnCLPingWithNumClientsReceived\0"
    "OnCLSendEmptyMes\0TargetInetAddr\0"
    "OnCLReqServerList\0OnCLReqVersionAndOS\0"
    "OnCLReqConnClientsList\0"
    "OnCLRegisterServerReceived\0LInetAddr\0"
    "CServerCoreInfo\0ServerInfo\0"
    "OnCLRegisterServerResp\0ESvrRegResult\0"
    "eResult\0OnSvrRegStatusChanged\0"
    "OnCLUnregisterServerReceived\0"
    "OnCLDisconnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    1,  126,    2, 0x06 /* Public */,
       6,    0,  129,    2, 0x06 /* Public */,
       7,    5,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  141,    2, 0x0a /* Public */,
      15,    2,  142,    2, 0x0a /* Public */,
      16,    1,  147,    2, 0x0a /* Public */,
      17,    2,  150,    2, 0x0a /* Public */,
      21,    3,  155,    2, 0x0a /* Public */,
      24,    4,  162,    2, 0x0a /* Public */,
      26,    2,  171,    2, 0x0a /* Public */,
      28,    3,  176,    2, 0x0a /* Public */,
      29,    1,  183,    2, 0x0a /* Public */,
      31,    1,  186,    2, 0x0a /* Public */,
      32,    1,  189,    2, 0x0a /* Public */,
      33,    1,  192,    2, 0x0a /* Public */,
      34,    3,  195,    2, 0x0a /* Public */,
      38,    2,  202,    2, 0x0a /* Public */,
      41,    0,  207,    2, 0x0a /* Public */,
      42,    1,  208,    2, 0x0a /* Public */,
      43,    1,  211,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 9, QMetaType::Int, 0x80000000 | 12,    5,    8,   10,   11,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    5,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19, 0x80000000 | 9,   22,   23,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 19, 0x80000000 | 9,   25,   22,   23,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   18,   27,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   18,   27,    2,
    QMetaType::Void, 0x80000000 | 9,   30,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 36,   18,   35,   37,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 39,    2,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, 0x80000000 | 9,   18,

       0        // eod
};

void CServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CServer *_t = static_cast<CServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Started(); break;
        case 1: _t->Stopped(); break;
        case 2: _t->ClientDisconnected((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->SvrRegStatusChanged(); break;
        case 4: _t->AudioFrame((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const CHostAddress(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const CVector<int16_t>(*)>(_a[5]))); break;
        case 5: _t->OnTimer(); break;
        case 6: _t->OnNewConnection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CHostAddress(*)>(_a[2]))); break;
        case 7: _t->OnServerFull((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 8: _t->OnSendCLProtMessage((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2]))); break;
        case 9: _t->OnProtcolCLMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 10: _t->OnProtcolMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[3])),(*reinterpret_cast< CHostAddress(*)>(_a[4]))); break;
        case 11: _t->OnCLPingReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->OnCLPingWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->OnCLSendEmptyMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 14: _t->OnCLReqServerList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 15: _t->OnCLReqVersionAndOS((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 16: _t->OnCLReqConnClientsList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 17: _t->OnCLRegisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CHostAddress(*)>(_a[2])),(*reinterpret_cast< CServerCoreInfo(*)>(_a[3]))); break;
        case 18: _t->OnCLRegisterServerResp((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< ESvrRegResult(*)>(_a[2]))); break;
        case 19: _t->OnSvrRegStatusChanged(); break;
        case 20: _t->OnCLUnregisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 21: _t->OnCLDisconnection((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CVector<int16_t> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServer::Started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServer::Stopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CServer::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServer::ClientDisconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServer::SvrRegStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CServer::*_t)(const int , const QString , const CHostAddress , const int , const CVector<int16_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServer::AudioFrame)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CServer.data,
      qt_meta_data_CServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CServer.stringdata0))
        return static_cast<void*>(const_cast< CServer*>(this));
    if (!strcmp(_clname, "CServerSlots<50>"))
        return static_cast< CServerSlots<50>*>(const_cast< CServer*>(this));
    return QObject::qt_metacast(_clname);
}

int CServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void CServer::Started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CServer::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CServer::ClientDisconnected(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CServer::SvrRegStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CServer::AudioFrame(const int _t1, const QString _t2, const CHostAddress _t3, const int _t4, const CVector<int16_t> _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
