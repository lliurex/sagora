/****************************************************************************
** Meta object code from reading C++ file 'channel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/channel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CChannel_t {
    QByteArrayData data[49];
    char stringdata0[786];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CChannel_t qt_meta_stringdata_CChannel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CChannel"
QT_MOC_LITERAL(1, 9, 19), // "MessReadyForSending"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(4, 47, 10), // "vecMessage"
QT_MOC_LITERAL(5, 58, 13), // "NewConnection"
QT_MOC_LITERAL(6, 72, 14), // "ReqJittBufSize"
QT_MOC_LITERAL(7, 87, 18), // "JittBufSizeChanged"
QT_MOC_LITERAL(8, 106, 14), // "iNewJitBufSize"
QT_MOC_LITERAL(9, 121, 27), // "ServerAutoSockBufSizeChange"
QT_MOC_LITERAL(10, 149, 8), // "iNNumFra"
QT_MOC_LITERAL(11, 158, 18), // "ReqConnClientsList"
QT_MOC_LITERAL(12, 177, 24), // "ConClientListMesReceived"
QT_MOC_LITERAL(13, 202, 21), // "CVector<CChannelInfo>"
QT_MOC_LITERAL(14, 224, 11), // "vecChanInfo"
QT_MOC_LITERAL(15, 236, 18), // "ChanInfoHasChanged"
QT_MOC_LITERAL(16, 255, 11), // "ReqChanInfo"
QT_MOC_LITERAL(17, 267, 16), // "ChatTextReceived"
QT_MOC_LITERAL(18, 284, 11), // "strChatText"
QT_MOC_LITERAL(19, 296, 17), // "ReqNetTranspProps"
QT_MOC_LITERAL(20, 314, 15), // "LicenceRequired"
QT_MOC_LITERAL(21, 330, 12), // "ELicenceType"
QT_MOC_LITERAL(22, 343, 12), // "eLicenceType"
QT_MOC_LITERAL(23, 356, 12), // "Disconnected"
QT_MOC_LITERAL(24, 369, 17), // "DetectedCLMessage"
QT_MOC_LITERAL(25, 387, 16), // "vecbyMesBodyData"
QT_MOC_LITERAL(26, 404, 6), // "iRecID"
QT_MOC_LITERAL(27, 411, 12), // "CHostAddress"
QT_MOC_LITERAL(28, 424, 11), // "RecHostAddr"
QT_MOC_LITERAL(29, 436, 16), // "ParseMessageBody"
QT_MOC_LITERAL(30, 453, 11), // "iRecCounter"
QT_MOC_LITERAL(31, 465, 17), // "OnSendProtMessage"
QT_MOC_LITERAL(32, 483, 19), // "OnJittBufSizeChange"
QT_MOC_LITERAL(33, 503, 16), // "OnChangeChanGain"
QT_MOC_LITERAL(34, 520, 7), // "iChanID"
QT_MOC_LITERAL(35, 528, 8), // "dNewGain"
QT_MOC_LITERAL(36, 537, 16), // "OnChangeChanInfo"
QT_MOC_LITERAL(37, 554, 16), // "CChannelCoreInfo"
QT_MOC_LITERAL(38, 571, 8), // "ChanInfo"
QT_MOC_LITERAL(39, 580, 24), // "OnNetTranspPropsReceived"
QT_MOC_LITERAL(40, 605, 22), // "CNetworkTransportProps"
QT_MOC_LITERAL(41, 628, 21), // "NetworkTransportProps"
QT_MOC_LITERAL(42, 650, 19), // "OnReqNetTranspProps"
QT_MOC_LITERAL(43, 670, 18), // "OnParseMessageBody"
QT_MOC_LITERAL(44, 689, 24), // "OnProtcolMessageReceived"
QT_MOC_LITERAL(45, 714, 26), // "OnProtcolCLMessageReceived"
QT_MOC_LITERAL(46, 741, 15), // "OnNewConnection"
QT_MOC_LITERAL(47, 757, 21), // "OnReqChannelLevelList"
QT_MOC_LITERAL(48, 779, 6) // "bOptIn"

    },
    "CChannel\0MessReadyForSending\0\0"
    "CVector<uint8_t>\0vecMessage\0NewConnection\0"
    "ReqJittBufSize\0JittBufSizeChanged\0"
    "iNewJitBufSize\0ServerAutoSockBufSizeChange\0"
    "iNNumFra\0ReqConnClientsList\0"
    "ConClientListMesReceived\0CVector<CChannelInfo>\0"
    "vecChanInfo\0ChanInfoHasChanged\0"
    "ReqChanInfo\0ChatTextReceived\0strChatText\0"
    "ReqNetTranspProps\0LicenceRequired\0"
    "ELicenceType\0eLicenceType\0Disconnected\0"
    "DetectedCLMessage\0vecbyMesBodyData\0"
    "iRecID\0CHostAddress\0RecHostAddr\0"
    "ParseMessageBody\0iRecCounter\0"
    "OnSendProtMessage\0OnJittBufSizeChange\0"
    "OnChangeChanGain\0iChanID\0dNewGain\0"
    "OnChangeChanInfo\0CChannelCoreInfo\0"
    "ChanInfo\0OnNetTranspPropsReceived\0"
    "CNetworkTransportProps\0NetworkTransportProps\0"
    "OnReqNetTranspProps\0OnParseMessageBody\0"
    "OnProtcolMessageReceived\0"
    "OnProtcolCLMessageReceived\0OnNewConnection\0"
    "OnReqChannelLevelList\0bOptIn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    0,  147,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,
       9,    1,  152,    2, 0x06 /* Public */,
      11,    0,  155,    2, 0x06 /* Public */,
      12,    1,  156,    2, 0x06 /* Public */,
      15,    0,  159,    2, 0x06 /* Public */,
      16,    0,  160,    2, 0x06 /* Public */,
      17,    1,  161,    2, 0x06 /* Public */,
      19,    0,  164,    2, 0x06 /* Public */,
      20,    1,  165,    2, 0x06 /* Public */,
      23,    0,  168,    2, 0x06 /* Public */,
      24,    3,  169,    2, 0x06 /* Public */,
      29,    3,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  183,    2, 0x0a /* Public */,
      32,    1,  186,    2, 0x0a /* Public */,
      33,    2,  189,    2, 0x0a /* Public */,
      36,    1,  194,    2, 0x0a /* Public */,
      39,    1,  197,    2, 0x0a /* Public */,
      42,    0,  200,    2, 0x0a /* Public */,
      43,    3,  201,    2, 0x0a /* Public */,
      44,    4,  208,    2, 0x0a /* Public */,
      45,    3,  217,    2, 0x0a /* Public */,
      46,    0,  224,    2, 0x0a /* Public */,
      47,    1,  225,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 27,   25,   26,   28,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   25,   30,   26,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   34,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   25,   30,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 27,   30,   26,   25,   28,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 27,   26,   25,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,

       0        // eod
};

void CChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CChannel *_t = static_cast<CChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MessReadyForSending((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->NewConnection(); break;
        case 2: _t->ReqJittBufSize(); break;
        case 3: _t->JittBufSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ServerAutoSockBufSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ReqConnClientsList(); break;
        case 6: _t->ConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 7: _t->ChanInfoHasChanged(); break;
        case 8: _t->ReqChanInfo(); break;
        case 9: _t->ChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->ReqNetTranspProps(); break;
        case 11: _t->LicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 12: _t->Disconnected(); break;
        case 13: _t->DetectedCLMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 14: _t->ParseMessageBody((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->OnSendProtMessage((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 16: _t->OnJittBufSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->OnChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->OnChangeChanInfo((*reinterpret_cast< CChannelCoreInfo(*)>(_a[1]))); break;
        case 19: _t->OnNetTranspPropsReceived((*reinterpret_cast< CNetworkTransportProps(*)>(_a[1]))); break;
        case 20: _t->OnReqNetTranspProps(); break;
        case 21: _t->OnParseMessageBody((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->OnProtcolMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[3])),(*reinterpret_cast< CHostAddress(*)>(_a[4]))); break;
        case 23: _t->OnProtcolCLMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2])),(*reinterpret_cast< CHostAddress(*)>(_a[3]))); break;
        case 24: _t->OnNewConnection(); break;
        case 25: _t->OnReqChannelLevelList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CChannel::*_t)(CVector<uint8_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::MessReadyForSending)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::NewConnection)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ReqJittBufSize)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::JittBufSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ServerAutoSockBufSizeChange)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ReqConnClientsList)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(CVector<CChannelInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ConClientListMesReceived)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ChanInfoHasChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ReqChanInfo)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ChatTextReceived)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ReqNetTranspProps)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(ELicenceType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::LicenceRequired)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::Disconnected)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(CVector<uint8_t> , int , CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::DetectedCLMessage)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (CChannel::*_t)(CVector<uint8_t> , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CChannel::ParseMessageBody)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject CChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CChannel.data,
      qt_meta_data_CChannel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CChannel.stringdata0))
        return static_cast<void*>(const_cast< CChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int CChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void CChannel::MessReadyForSending(CVector<uint8_t> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CChannel::NewConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CChannel::ReqJittBufSize()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CChannel::JittBufSizeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CChannel::ServerAutoSockBufSizeChange(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CChannel::ReqConnClientsList()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CChannel::ConClientListMesReceived(CVector<CChannelInfo> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CChannel::ChanInfoHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void CChannel::ReqChanInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void CChannel::ChatTextReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CChannel::ReqNetTranspProps()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void CChannel::LicenceRequired(ELicenceType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CChannel::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void CChannel::DetectedCLMessage(CVector<uint8_t> _t1, int _t2, CHostAddress _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CChannel::ParseMessageBody(CVector<uint8_t> _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
