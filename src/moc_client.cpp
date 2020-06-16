/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CClient_t {
    QByteArrayData data[49];
    char stringdata0[830];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CClient_t qt_meta_stringdata_CClient = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CClient"
QT_MOC_LITERAL(1, 8, 24), // "ConClientListMesReceived"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "CVector<CChannelInfo>"
QT_MOC_LITERAL(4, 56, 11), // "vecChanInfo"
QT_MOC_LITERAL(5, 68, 16), // "ChatTextReceived"
QT_MOC_LITERAL(6, 85, 11), // "strChatText"
QT_MOC_LITERAL(7, 97, 15), // "LicenceRequired"
QT_MOC_LITERAL(8, 113, 12), // "ELicenceType"
QT_MOC_LITERAL(9, 126, 12), // "eLicenceType"
QT_MOC_LITERAL(10, 139, 16), // "PingTimeReceived"
QT_MOC_LITERAL(11, 156, 9), // "iPingTime"
QT_MOC_LITERAL(12, 166, 20), // "CLServerListReceived"
QT_MOC_LITERAL(13, 187, 12), // "CHostAddress"
QT_MOC_LITERAL(14, 200, 8), // "InetAddr"
QT_MOC_LITERAL(15, 209, 20), // "CVector<CServerInfo>"
QT_MOC_LITERAL(16, 230, 13), // "vecServerInfo"
QT_MOC_LITERAL(17, 244, 28), // "CLConnClientsListMesReceived"
QT_MOC_LITERAL(18, 273, 32), // "CLPingTimeWithNumClientsReceived"
QT_MOC_LITERAL(19, 306, 11), // "iNumClients"
QT_MOC_LITERAL(20, 318, 26), // "CLChannelLevelListReceived"
QT_MOC_LITERAL(21, 345, 17), // "CVector<uint16_t>"
QT_MOC_LITERAL(22, 363, 12), // "vecLevelList"
QT_MOC_LITERAL(23, 376, 12), // "Disconnected"
QT_MOC_LITERAL(24, 389, 22), // "ControllerInFaderLevel"
QT_MOC_LITERAL(25, 412, 11), // "iChannelIdx"
QT_MOC_LITERAL(26, 424, 6), // "iValue"
QT_MOC_LITERAL(27, 431, 31), // "CentralServerAddressTypeChanged"
QT_MOC_LITERAL(28, 463, 17), // "OnSendProtMessage"
QT_MOC_LITERAL(29, 481, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(30, 498, 10), // "vecMessage"
QT_MOC_LITERAL(31, 509, 23), // "OnInvalidPacketReceived"
QT_MOC_LITERAL(32, 533, 11), // "RecHostAddr"
QT_MOC_LITERAL(33, 545, 19), // "OnDetectedCLMessage"
QT_MOC_LITERAL(34, 565, 16), // "vecbyMesBodyData"
QT_MOC_LITERAL(35, 582, 6), // "iRecID"
QT_MOC_LITERAL(36, 589, 16), // "OnReqJittBufSize"
QT_MOC_LITERAL(37, 606, 20), // "OnJittBufSizeChanged"
QT_MOC_LITERAL(38, 627, 14), // "iNewJitBufSize"
QT_MOC_LITERAL(39, 642, 13), // "OnReqChanInfo"
QT_MOC_LITERAL(40, 656, 15), // "OnNewConnection"
QT_MOC_LITERAL(41, 672, 17), // "OnCLDisconnection"
QT_MOC_LITERAL(42, 690, 16), // "OnCLPingReceived"
QT_MOC_LITERAL(43, 707, 3), // "iMs"
QT_MOC_LITERAL(44, 711, 19), // "OnSendCLProtMessage"
QT_MOC_LITERAL(45, 731, 30), // "OnCLPingWithNumClientsReceived"
QT_MOC_LITERAL(46, 762, 21), // "OnSndCrdReinitRequest"
QT_MOC_LITERAL(47, 784, 16), // "iSndCrdResetType"
QT_MOC_LITERAL(48, 801, 28) // "OnCLChannelLevelListReceived"

    },
    "CClient\0ConClientListMesReceived\0\0"
    "CVector<CChannelInfo>\0vecChanInfo\0"
    "ChatTextReceived\0strChatText\0"
    "LicenceRequired\0ELicenceType\0eLicenceType\0"
    "PingTimeReceived\0iPingTime\0"
    "CLServerListReceived\0CHostAddress\0"
    "InetAddr\0CVector<CServerInfo>\0"
    "vecServerInfo\0CLConnClientsListMesReceived\0"
    "CLPingTimeWithNumClientsReceived\0"
    "iNumClients\0CLChannelLevelListReceived\0"
    "CVector<uint16_t>\0vecLevelList\0"
    "Disconnected\0ControllerInFaderLevel\0"
    "iChannelIdx\0iValue\0CentralServerAddressTypeChanged\0"
    "OnSendProtMessage\0CVector<uint8_t>\0"
    "vecMessage\0OnInvalidPacketReceived\0"
    "RecHostAddr\0OnDetectedCLMessage\0"
    "vecbyMesBodyData\0iRecID\0OnReqJittBufSize\0"
    "OnJittBufSizeChanged\0iNewJitBufSize\0"
    "OnReqChanInfo\0OnNewConnection\0"
    "OnCLDisconnection\0OnCLPingReceived\0"
    "iMs\0OnSendCLProtMessage\0"
    "OnCLPingWithNumClientsReceived\0"
    "OnSndCrdReinitRequest\0iSndCrdResetType\0"
    "OnCLChannelLevelListReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       5,    1,  137,    2, 0x06 /* Public */,
       7,    1,  140,    2, 0x06 /* Public */,
      10,    1,  143,    2, 0x06 /* Public */,
      12,    2,  146,    2, 0x06 /* Public */,
      17,    2,  151,    2, 0x06 /* Public */,
      18,    3,  156,    2, 0x06 /* Public */,
      20,    2,  163,    2, 0x06 /* Public */,
      23,    0,  168,    2, 0x06 /* Public */,
      24,    2,  169,    2, 0x06 /* Public */,
      27,    0,  174,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  175,    2, 0x0a /* Public */,
      31,    1,  178,    2, 0x0a /* Public */,
      33,    3,  181,    2, 0x0a /* Public */,
      36,    0,  188,    2, 0x0a /* Public */,
      37,    1,  189,    2, 0x0a /* Public */,
      39,    0,  192,    2, 0x0a /* Public */,
      40,    0,  193,    2, 0x0a /* Public */,
      41,    1,  194,    2, 0x0a /* Public */,
      42,    2,  197,    2, 0x0a /* Public */,
      44,    2,  202,    2, 0x0a /* Public */,
      45,    3,  207,    2, 0x0a /* Public */,
      46,    1,  214,    2, 0x0a /* Public */,
      48,    2,  217,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 3,   14,    4,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   11,   19,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 21,   14,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   26,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 13,   32,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int, 0x80000000 | 13,   34,   35,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   43,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 29,   14,   30,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   43,   19,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 21,   14,   22,

       0        // eod
};

void CClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CClient *_t = static_cast<CClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 1: _t->ChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->LicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 3: _t->PingTimeReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->CLServerListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CServerInfo>(*)>(_a[2]))); break;
        case 5: _t->CLConnClientsListMesReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[2]))); break;
        case 6: _t->CLPingTimeWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->CLChannelLevelListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint16_t>(*)>(_a[2]))); break;
        case 8: _t->Disconnected(); break;
        case 9: _t->ControllerInFaderLevel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->CentralServerAddressTypeChanged(); break;
        case 11: _t->OnSendProtMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 12: _t->OnInvalidPacketReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 13: _t->OnDetectedCLMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 14: _t->OnReqJittBufSize(); break;
        case 15: _t->OnJittBufSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->OnReqChanInfo(); break;
        case 17: _t->OnNewConnection(); break;
        case 18: _t->OnCLDisconnection((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 19: _t->OnCLPingReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->OnSendCLProtMessage((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2]))); break;
        case 21: _t->OnCLPingWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->OnSndCrdReinitRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->OnCLChannelLevelListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint16_t>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CClient::*_t)(CVector<CChannelInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::ConClientListMesReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::ChatTextReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(ELicenceType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::LicenceRequired)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::PingTimeReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(CHostAddress , CVector<CServerInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::CLServerListReceived)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(CHostAddress , CVector<CChannelInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::CLConnClientsListMesReceived)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(CHostAddress , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::CLPingTimeWithNumClientsReceived)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(CHostAddress , CVector<uint16_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::CLChannelLevelListReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::Disconnected)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (CClient::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::ControllerInFaderLevel)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (CClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CClient::CentralServerAddressTypeChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject CClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CClient.data,
      qt_meta_data_CClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CClient.stringdata0))
        return static_cast<void*>(const_cast< CClient*>(this));
    return QObject::qt_metacast(_clname);
}

int CClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void CClient::ConClientListMesReceived(CVector<CChannelInfo> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CClient::ChatTextReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CClient::LicenceRequired(ELicenceType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CClient::PingTimeReceived(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CClient::CLServerListReceived(CHostAddress _t1, CVector<CServerInfo> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CClient::CLConnClientsListMesReceived(CHostAddress _t1, CVector<CChannelInfo> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CClient::CLPingTimeWithNumClientsReceived(CHostAddress _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CClient::CLChannelLevelListReceived(CHostAddress _t1, CVector<uint16_t> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CClient::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void CClient::ControllerInFaderLevel(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CClient::CentralServerAddressTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
