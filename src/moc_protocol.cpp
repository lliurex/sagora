/****************************************************************************
** Meta object code from reading C++ file 'protocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/protocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CProtocol_t {
    QByteArrayData data[66];
    char stringdata0[1073];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CProtocol_t qt_meta_stringdata_CProtocol = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CProtocol"
QT_MOC_LITERAL(1, 10, 19), // "MessReadyForSending"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "CVector<uint8_t>"
QT_MOC_LITERAL(4, 48, 10), // "vecMessage"
QT_MOC_LITERAL(5, 59, 21), // "CLMessReadyForSending"
QT_MOC_LITERAL(6, 81, 12), // "CHostAddress"
QT_MOC_LITERAL(7, 94, 8), // "InetAddr"
QT_MOC_LITERAL(8, 103, 17), // "ChangeJittBufSize"
QT_MOC_LITERAL(9, 121, 14), // "iNewJitBufSize"
QT_MOC_LITERAL(10, 136, 14), // "ReqJittBufSize"
QT_MOC_LITERAL(11, 151, 18), // "ChangeNetwBlSiFact"
QT_MOC_LITERAL(12, 170, 16), // "iNewNetwBlSiFact"
QT_MOC_LITERAL(13, 187, 14), // "ChangeChanGain"
QT_MOC_LITERAL(14, 202, 7), // "iChanID"
QT_MOC_LITERAL(15, 210, 8), // "dNewGain"
QT_MOC_LITERAL(16, 219, 24), // "ConClientListMesReceived"
QT_MOC_LITERAL(17, 244, 21), // "CVector<CChannelInfo>"
QT_MOC_LITERAL(18, 266, 11), // "vecChanInfo"
QT_MOC_LITERAL(19, 278, 21), // "ServerFullMesReceived"
QT_MOC_LITERAL(20, 300, 18), // "ReqConnClientsList"
QT_MOC_LITERAL(21, 319, 14), // "ChangeChanInfo"
QT_MOC_LITERAL(22, 334, 16), // "CChannelCoreInfo"
QT_MOC_LITERAL(23, 351, 8), // "ChanInfo"
QT_MOC_LITERAL(24, 360, 11), // "ReqChanInfo"
QT_MOC_LITERAL(25, 372, 16), // "ChatTextReceived"
QT_MOC_LITERAL(26, 389, 11), // "strChatText"
QT_MOC_LITERAL(27, 401, 22), // "NetTranspPropsReceived"
QT_MOC_LITERAL(28, 424, 22), // "CNetworkTransportProps"
QT_MOC_LITERAL(29, 447, 21), // "NetworkTransportProps"
QT_MOC_LITERAL(30, 469, 17), // "ReqNetTranspProps"
QT_MOC_LITERAL(31, 487, 15), // "LicenceRequired"
QT_MOC_LITERAL(32, 503, 12), // "ELicenceType"
QT_MOC_LITERAL(33, 516, 12), // "eLicenceType"
QT_MOC_LITERAL(34, 529, 19), // "ReqChannelLevelList"
QT_MOC_LITERAL(35, 549, 6), // "bOptIn"
QT_MOC_LITERAL(36, 556, 14), // "CLPingReceived"
QT_MOC_LITERAL(37, 571, 3), // "iMs"
QT_MOC_LITERAL(38, 575, 28), // "CLPingWithNumClientsReceived"
QT_MOC_LITERAL(39, 604, 11), // "iNumClients"
QT_MOC_LITERAL(40, 616, 24), // "CLRegisterServerReceived"
QT_MOC_LITERAL(41, 641, 9), // "LInetAddr"
QT_MOC_LITERAL(42, 651, 15), // "CServerCoreInfo"
QT_MOC_LITERAL(43, 667, 10), // "ServerInfo"
QT_MOC_LITERAL(44, 678, 26), // "CLUnregisterServerReceived"
QT_MOC_LITERAL(45, 705, 20), // "CLServerListReceived"
QT_MOC_LITERAL(46, 726, 20), // "CVector<CServerInfo>"
QT_MOC_LITERAL(47, 747, 13), // "vecServerInfo"
QT_MOC_LITERAL(48, 761, 15), // "CLReqServerList"
QT_MOC_LITERAL(49, 777, 14), // "CLSendEmptyMes"
QT_MOC_LITERAL(50, 792, 14), // "TargetInetAddr"
QT_MOC_LITERAL(51, 807, 15), // "CLDisconnection"
QT_MOC_LITERAL(52, 823, 22), // "CLVersionAndOSReceived"
QT_MOC_LITERAL(53, 846, 22), // "COSUtil::EOpSystemType"
QT_MOC_LITERAL(54, 869, 7), // "eOSType"
QT_MOC_LITERAL(55, 877, 10), // "strVersion"
QT_MOC_LITERAL(56, 888, 17), // "CLReqVersionAndOS"
QT_MOC_LITERAL(57, 906, 28), // "CLConnClientsListMesReceived"
QT_MOC_LITERAL(58, 935, 20), // "CLReqConnClientsList"
QT_MOC_LITERAL(59, 956, 26), // "CLChannelLevelListReceived"
QT_MOC_LITERAL(60, 983, 17), // "CVector<uint16_t>"
QT_MOC_LITERAL(61, 1001, 12), // "vecLevelList"
QT_MOC_LITERAL(62, 1014, 20), // "CLRegisterServerResp"
QT_MOC_LITERAL(63, 1035, 13), // "ESvrRegResult"
QT_MOC_LITERAL(64, 1049, 7), // "eStatus"
QT_MOC_LITERAL(65, 1057, 15) // "OnTimerSendMess"

    },
    "CProtocol\0MessReadyForSending\0\0"
    "CVector<uint8_t>\0vecMessage\0"
    "CLMessReadyForSending\0CHostAddress\0"
    "InetAddr\0ChangeJittBufSize\0iNewJitBufSize\0"
    "ReqJittBufSize\0ChangeNetwBlSiFact\0"
    "iNewNetwBlSiFact\0ChangeChanGain\0iChanID\0"
    "dNewGain\0ConClientListMesReceived\0"
    "CVector<CChannelInfo>\0vecChanInfo\0"
    "ServerFullMesReceived\0ReqConnClientsList\0"
    "ChangeChanInfo\0CChannelCoreInfo\0"
    "ChanInfo\0ReqChanInfo\0ChatTextReceived\0"
    "strChatText\0NetTranspPropsReceived\0"
    "CNetworkTransportProps\0NetworkTransportProps\0"
    "ReqNetTranspProps\0LicenceRequired\0"
    "ELicenceType\0eLicenceType\0ReqChannelLevelList\0"
    "bOptIn\0CLPingReceived\0iMs\0"
    "CLPingWithNumClientsReceived\0iNumClients\0"
    "CLRegisterServerReceived\0LInetAddr\0"
    "CServerCoreInfo\0ServerInfo\0"
    "CLUnregisterServerReceived\0"
    "CLServerListReceived\0CVector<CServerInfo>\0"
    "vecServerInfo\0CLReqServerList\0"
    "CLSendEmptyMes\0TargetInetAddr\0"
    "CLDisconnection\0CLVersionAndOSReceived\0"
    "COSUtil::EOpSystemType\0eOSType\0"
    "strVersion\0CLReqVersionAndOS\0"
    "CLConnClientsListMesReceived\0"
    "CLReqConnClientsList\0CLChannelLevelListReceived\0"
    "CVector<uint16_t>\0vecLevelList\0"
    "CLRegisterServerResp\0ESvrRegResult\0"
    "eStatus\0OnTimerSendMess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       5,    2,  172,    2, 0x06 /* Public */,
       8,    1,  177,    2, 0x06 /* Public */,
      10,    0,  180,    2, 0x06 /* Public */,
      11,    1,  181,    2, 0x06 /* Public */,
      13,    2,  184,    2, 0x06 /* Public */,
      16,    1,  189,    2, 0x06 /* Public */,
      19,    0,  192,    2, 0x06 /* Public */,
      20,    0,  193,    2, 0x06 /* Public */,
      21,    1,  194,    2, 0x06 /* Public */,
      24,    0,  197,    2, 0x06 /* Public */,
      25,    1,  198,    2, 0x06 /* Public */,
      27,    1,  201,    2, 0x06 /* Public */,
      30,    0,  204,    2, 0x06 /* Public */,
      31,    1,  205,    2, 0x06 /* Public */,
      34,    1,  208,    2, 0x06 /* Public */,
      36,    2,  211,    2, 0x06 /* Public */,
      38,    3,  216,    2, 0x06 /* Public */,
      40,    3,  223,    2, 0x06 /* Public */,
      44,    1,  230,    2, 0x06 /* Public */,
      45,    2,  233,    2, 0x06 /* Public */,
      48,    1,  238,    2, 0x06 /* Public */,
      49,    1,  241,    2, 0x06 /* Public */,
      51,    1,  244,    2, 0x06 /* Public */,
      52,    3,  247,    2, 0x06 /* Public */,
      56,    1,  254,    2, 0x06 /* Public */,
      57,    2,  257,    2, 0x06 /* Public */,
      58,    1,  262,    2, 0x06 /* Public */,
      59,    2,  265,    2, 0x06 /* Public */,
      62,    2,  270,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      65,    0,  275,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,   37,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, QMetaType::Int,    7,   37,   39,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 42,    7,   41,   43,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 46,    7,   47,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,   50,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 53, QMetaType::QString,    7,   54,   55,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 17,    7,   18,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 60,    7,   61,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 63,    7,   64,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CProtocol *_t = static_cast<CProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MessReadyForSending((*reinterpret_cast< CVector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->CLMessReadyForSending((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint8_t>(*)>(_a[2]))); break;
        case 2: _t->ChangeJittBufSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ReqJittBufSize(); break;
        case 4: _t->ChangeNetwBlSiFact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->ConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 7: _t->ServerFullMesReceived(); break;
        case 8: _t->ReqConnClientsList(); break;
        case 9: _t->ChangeChanInfo((*reinterpret_cast< CChannelCoreInfo(*)>(_a[1]))); break;
        case 10: _t->ReqChanInfo(); break;
        case 11: _t->ChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->NetTranspPropsReceived((*reinterpret_cast< CNetworkTransportProps(*)>(_a[1]))); break;
        case 13: _t->ReqNetTranspProps(); break;
        case 14: _t->LicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 15: _t->ReqChannelLevelList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->CLPingReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->CLPingWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->CLRegisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CHostAddress(*)>(_a[2])),(*reinterpret_cast< CServerCoreInfo(*)>(_a[3]))); break;
        case 19: _t->CLUnregisterServerReceived((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 20: _t->CLServerListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CServerInfo>(*)>(_a[2]))); break;
        case 21: _t->CLReqServerList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 22: _t->CLSendEmptyMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 23: _t->CLDisconnection((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 24: _t->CLVersionAndOSReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< COSUtil::EOpSystemType(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 25: _t->CLReqVersionAndOS((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 26: _t->CLConnClientsListMesReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[2]))); break;
        case 27: _t->CLReqConnClientsList((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 28: _t->CLChannelLevelListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint16_t>(*)>(_a[2]))); break;
        case 29: _t->CLRegisterServerResp((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< ESvrRegResult(*)>(_a[2]))); break;
        case 30: _t->OnTimerSendMess(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CProtocol::*_t)(CVector<uint8_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::MessReadyForSending)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , CVector<uint8_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLMessReadyForSending)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ChangeJittBufSize)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ReqJittBufSize)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ChangeNetwBlSiFact)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(int , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ChangeChanGain)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CVector<CChannelInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ConClientListMesReceived)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ServerFullMesReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ReqConnClientsList)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CChannelCoreInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ChangeChanInfo)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ReqChanInfo)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ChatTextReceived)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CNetworkTransportProps );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::NetTranspPropsReceived)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ReqNetTranspProps)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(ELicenceType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::LicenceRequired)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::ReqChannelLevelList)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLPingReceived)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLPingWithNumClientsReceived)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , CHostAddress , CServerCoreInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLRegisterServerReceived)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLUnregisterServerReceived)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , CVector<CServerInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLServerListReceived)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLReqServerList)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLSendEmptyMes)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLDisconnection)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , COSUtil::EOpSystemType , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLVersionAndOSReceived)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLReqVersionAndOS)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , CVector<CChannelInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLConnClientsListMesReceived)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLReqConnClientsList)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , CVector<uint16_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLChannelLevelListReceived)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (CProtocol::*_t)(CHostAddress , ESvrRegResult );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CProtocol::CLRegisterServerResp)) {
                *result = 29;
                return;
            }
        }
    }
}

const QMetaObject CProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CProtocol.data,
      qt_meta_data_CProtocol,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CProtocol.stringdata0))
        return static_cast<void*>(const_cast< CProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int CProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void CProtocol::MessReadyForSending(CVector<uint8_t> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CProtocol::CLMessReadyForSending(CHostAddress _t1, CVector<uint8_t> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CProtocol::ChangeJittBufSize(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CProtocol::ReqJittBufSize()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CProtocol::ChangeNetwBlSiFact(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CProtocol::ChangeChanGain(int _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CProtocol::ConClientListMesReceived(CVector<CChannelInfo> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CProtocol::ServerFullMesReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void CProtocol::ReqConnClientsList()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void CProtocol::ChangeChanInfo(CChannelCoreInfo _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CProtocol::ReqChanInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void CProtocol::ChatTextReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CProtocol::NetTranspPropsReceived(CNetworkTransportProps _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CProtocol::ReqNetTranspProps()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void CProtocol::LicenceRequired(ELicenceType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CProtocol::ReqChannelLevelList(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CProtocol::CLPingReceived(CHostAddress _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CProtocol::CLPingWithNumClientsReceived(CHostAddress _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CProtocol::CLRegisterServerReceived(CHostAddress _t1, CHostAddress _t2, CServerCoreInfo _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CProtocol::CLUnregisterServerReceived(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CProtocol::CLServerListReceived(CHostAddress _t1, CVector<CServerInfo> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CProtocol::CLReqServerList(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CProtocol::CLSendEmptyMes(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CProtocol::CLDisconnection(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CProtocol::CLVersionAndOSReceived(CHostAddress _t1, COSUtil::EOpSystemType _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CProtocol::CLReqVersionAndOS(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CProtocol::CLConnClientsListMesReceived(CHostAddress _t1, CVector<CChannelInfo> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void CProtocol::CLReqConnClientsList(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void CProtocol::CLChannelLevelListReceived(CHostAddress _t1, CVector<uint16_t> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void CProtocol::CLRegisterServerResp(CHostAddress _t1, ESvrRegResult _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_END_MOC_NAMESPACE
