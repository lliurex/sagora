/****************************************************************************
** Meta object code from reading C++ file 'clientdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/clientdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CClientDlg_t {
    QByteArrayData data[71];
    char stringdata0[1308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CClientDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CClientDlg_t qt_meta_stringdata_CClientDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CClientDlg"
QT_MOC_LITERAL(1, 11, 13), // "OnAboutToQuit"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "ShowPerfilSlot"
QT_MOC_LITERAL(4, 41, 5), // "value"
QT_MOC_LITERAL(5, 47, 18), // "OnConnectDisconBut"
QT_MOC_LITERAL(6, 66, 13), // "OnTimerSigMet"
QT_MOC_LITERAL(7, 80, 17), // "OnTimerBuffersLED"
QT_MOC_LITERAL(8, 98, 23), // "ShowAnalyzerConsoleSlot"
QT_MOC_LITERAL(9, 122, 13), // "OnTimerStatus"
QT_MOC_LITERAL(10, 136, 11), // "OnTimerPing"
QT_MOC_LITERAL(11, 148, 16), // "OnPingTimeResult"
QT_MOC_LITERAL(12, 165, 9), // "iPingTime"
QT_MOC_LITERAL(13, 175, 34), // "OnCLPingTimeWithNumClientsRec..."
QT_MOC_LITERAL(14, 210, 12), // "CHostAddress"
QT_MOC_LITERAL(15, 223, 8), // "InetAddr"
QT_MOC_LITERAL(16, 232, 11), // "iNumClients"
QT_MOC_LITERAL(17, 244, 24), // "OnControllerInFaderLevel"
QT_MOC_LITERAL(18, 269, 11), // "iChannelIdx"
QT_MOC_LITERAL(19, 281, 6), // "iValue"
QT_MOC_LITERAL(20, 288, 27), // "OnOpenConnectionSetupDialog"
QT_MOC_LITERAL(21, 316, 27), // "OnOpenMusicianProfileDialog"
QT_MOC_LITERAL(22, 344, 21), // "OnOpenGeneralSettings"
QT_MOC_LITERAL(23, 366, 16), // "OnOpenChatDialog"
QT_MOC_LITERAL(24, 383, 21), // "OnOpenAnalyzerConsole"
QT_MOC_LITERAL(25, 405, 22), // "OnSettingsStateChanged"
QT_MOC_LITERAL(26, 428, 18), // "OnChatStateChanged"
QT_MOC_LITERAL(27, 447, 23), // "OnLocalMuteStateChanged"
QT_MOC_LITERAL(28, 471, 22), // "OnAudioPanValueChanged"
QT_MOC_LITERAL(29, 494, 25), // "OnAudioReverbValueChanged"
QT_MOC_LITERAL(30, 520, 19), // "OnReverbSelLClicked"
QT_MOC_LITERAL(31, 540, 19), // "OnReverbSelRClicked"
QT_MOC_LITERAL(32, 560, 26), // "OnConClientListMesReceived"
QT_MOC_LITERAL(33, 587, 21), // "CVector<CChannelInfo>"
QT_MOC_LITERAL(34, 609, 11), // "vecChanInfo"
QT_MOC_LITERAL(35, 621, 18), // "OnChatTextReceived"
QT_MOC_LITERAL(36, 640, 11), // "strChatText"
QT_MOC_LITERAL(37, 652, 17), // "OnLicenceRequired"
QT_MOC_LITERAL(38, 670, 12), // "ELicenceType"
QT_MOC_LITERAL(39, 683, 12), // "eLicenceType"
QT_MOC_LITERAL(40, 696, 16), // "OnChangeChanGain"
QT_MOC_LITERAL(41, 713, 3), // "iId"
QT_MOC_LITERAL(42, 717, 5), // "dGain"
QT_MOC_LITERAL(43, 723, 19), // "OnNewLocalInputText"
QT_MOC_LITERAL(44, 743, 20), // "OnReqServerListQuery"
QT_MOC_LITERAL(45, 764, 27), // "OnCreateCLServerListPingMes"
QT_MOC_LITERAL(46, 792, 34), // "OnCreateCLServerListReqVerAnd..."
QT_MOC_LITERAL(47, 827, 41), // "OnCreateCLServerListReqConnCl..."
QT_MOC_LITERAL(48, 869, 22), // "OnCLServerListReceived"
QT_MOC_LITERAL(49, 892, 20), // "CVector<CServerInfo>"
QT_MOC_LITERAL(50, 913, 13), // "vecServerInfo"
QT_MOC_LITERAL(51, 927, 30), // "OnCLConnClientsListMesReceived"
QT_MOC_LITERAL(52, 958, 28), // "OnCLChannelLevelListReceived"
QT_MOC_LITERAL(53, 987, 17), // "CVector<uint16_t>"
QT_MOC_LITERAL(54, 1005, 12), // "vecLevelList"
QT_MOC_LITERAL(55, 1018, 20), // "OnConnectDlgAccepted"
QT_MOC_LITERAL(56, 1039, 26), // "OnConnectDlgAcceptedServer"
QT_MOC_LITERAL(57, 1066, 13), // "bSalaByServer"
QT_MOC_LITERAL(58, 1080, 13), // "bPassByServer"
QT_MOC_LITERAL(59, 1094, 14), // "OnDisconnected"
QT_MOC_LITERAL(60, 1109, 33), // "OnCentralServerAddressTypeCha..."
QT_MOC_LITERAL(61, 1143, 18), // "OnGUIDesignChanged"
QT_MOC_LITERAL(62, 1162, 29), // "OnDisplayChannelLevelsChanged"
QT_MOC_LITERAL(63, 1192, 22), // "OnAudioChannelsChanged"
QT_MOC_LITERAL(64, 1215, 19), // "OnNumClientsChanged"
QT_MOC_LITERAL(65, 1235, 14), // "iNewNumClients"
QT_MOC_LITERAL(66, 1250, 23), // "OnNewClientLevelChanged"
QT_MOC_LITERAL(67, 1274, 6), // "accept"
QT_MOC_LITERAL(68, 1281, 13), // "keyPressEvent"
QT_MOC_LITERAL(69, 1295, 10), // "QKeyEvent*"
QT_MOC_LITERAL(70, 1306, 1) // "e"

    },
    "CClientDlg\0OnAboutToQuit\0\0ShowPerfilSlot\0"
    "value\0OnConnectDisconBut\0OnTimerSigMet\0"
    "OnTimerBuffersLED\0ShowAnalyzerConsoleSlot\0"
    "OnTimerStatus\0OnTimerPing\0OnPingTimeResult\0"
    "iPingTime\0OnCLPingTimeWithNumClientsReceived\0"
    "CHostAddress\0InetAddr\0iNumClients\0"
    "OnControllerInFaderLevel\0iChannelIdx\0"
    "iValue\0OnOpenConnectionSetupDialog\0"
    "OnOpenMusicianProfileDialog\0"
    "OnOpenGeneralSettings\0OnOpenChatDialog\0"
    "OnOpenAnalyzerConsole\0OnSettingsStateChanged\0"
    "OnChatStateChanged\0OnLocalMuteStateChanged\0"
    "OnAudioPanValueChanged\0OnAudioReverbValueChanged\0"
    "OnReverbSelLClicked\0OnReverbSelRClicked\0"
    "OnConClientListMesReceived\0"
    "CVector<CChannelInfo>\0vecChanInfo\0"
    "OnChatTextReceived\0strChatText\0"
    "OnLicenceRequired\0ELicenceType\0"
    "eLicenceType\0OnChangeChanGain\0iId\0"
    "dGain\0OnNewLocalInputText\0"
    "OnReqServerListQuery\0OnCreateCLServerListPingMes\0"
    "OnCreateCLServerListReqVerAndOSMes\0"
    "OnCreateCLServerListReqConnClientsListMes\0"
    "OnCLServerListReceived\0CVector<CServerInfo>\0"
    "vecServerInfo\0OnCLConnClientsListMesReceived\0"
    "OnCLChannelLevelListReceived\0"
    "CVector<uint16_t>\0vecLevelList\0"
    "OnConnectDlgAccepted\0OnConnectDlgAcceptedServer\0"
    "bSalaByServer\0bPassByServer\0OnDisconnected\0"
    "OnCentralServerAddressTypeChanged\0"
    "OnGUIDesignChanged\0OnDisplayChannelLevelsChanged\0"
    "OnAudioChannelsChanged\0OnNumClientsChanged\0"
    "iNewNumClients\0OnNewClientLevelChanged\0"
    "accept\0keyPressEvent\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CClientDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x0a /* Public */,
       3,    1,  245,    2, 0x0a /* Public */,
       5,    0,  248,    2, 0x0a /* Public */,
       6,    0,  249,    2, 0x0a /* Public */,
       7,    0,  250,    2, 0x0a /* Public */,
       8,    0,  251,    2, 0x0a /* Public */,
       9,    0,  252,    2, 0x0a /* Public */,
      10,    0,  253,    2, 0x0a /* Public */,
      11,    1,  254,    2, 0x0a /* Public */,
      13,    3,  257,    2, 0x0a /* Public */,
      17,    2,  264,    2, 0x0a /* Public */,
      20,    0,  269,    2, 0x0a /* Public */,
      21,    0,  270,    2, 0x0a /* Public */,
      22,    0,  271,    2, 0x0a /* Public */,
      23,    0,  272,    2, 0x0a /* Public */,
      24,    0,  273,    2, 0x0a /* Public */,
      25,    1,  274,    2, 0x0a /* Public */,
      26,    1,  277,    2, 0x0a /* Public */,
      27,    1,  280,    2, 0x0a /* Public */,
      28,    1,  283,    2, 0x0a /* Public */,
      29,    1,  286,    2, 0x0a /* Public */,
      30,    0,  289,    2, 0x0a /* Public */,
      31,    0,  290,    2, 0x0a /* Public */,
      32,    1,  291,    2, 0x0a /* Public */,
      35,    1,  294,    2, 0x0a /* Public */,
      37,    1,  297,    2, 0x0a /* Public */,
      40,    2,  300,    2, 0x0a /* Public */,
      43,    1,  305,    2, 0x0a /* Public */,
      44,    1,  308,    2, 0x0a /* Public */,
      45,    1,  311,    2, 0x0a /* Public */,
      46,    1,  314,    2, 0x0a /* Public */,
      47,    1,  317,    2, 0x0a /* Public */,
      48,    2,  320,    2, 0x0a /* Public */,
      51,    2,  325,    2, 0x0a /* Public */,
      52,    2,  330,    2, 0x0a /* Public */,
      55,    0,  335,    2, 0x0a /* Public */,
      56,    2,  336,    2, 0x0a /* Public */,
      59,    0,  341,    2, 0x0a /* Public */,
      60,    0,  342,    2, 0x0a /* Public */,
      61,    0,  343,    2, 0x0a /* Public */,
      62,    0,  344,    2, 0x0a /* Public */,
      63,    0,  345,    2, 0x0a /* Public */,
      64,    1,  346,    2, 0x0a /* Public */,
      66,    0,  349,    2, 0x0a /* Public */,
      67,    0,  350,    2, 0x0a /* Public */,
      68,    1,  351,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::Int,   15,   12,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   41,   42,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 49,   15,   50,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 33,   15,   34,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 53,    2,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   57,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,

       0        // eod
};

void CClientDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CClientDlg *_t = static_cast<CClientDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAboutToQuit(); break;
        case 1: _t->ShowPerfilSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnConnectDisconBut(); break;
        case 3: _t->OnTimerSigMet(); break;
        case 4: _t->OnTimerBuffersLED(); break;
        case 5: _t->ShowAnalyzerConsoleSlot(); break;
        case 6: _t->OnTimerStatus(); break;
        case 7: _t->OnTimerPing(); break;
        case 8: _t->OnPingTimeResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->OnCLPingTimeWithNumClientsReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->OnControllerInFaderLevel((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 11: _t->OnOpenConnectionSetupDialog(); break;
        case 12: _t->OnOpenMusicianProfileDialog(); break;
        case 13: _t->OnOpenGeneralSettings(); break;
        case 14: _t->OnOpenChatDialog(); break;
        case 15: _t->OnOpenAnalyzerConsole(); break;
        case 16: _t->OnSettingsStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->OnChatStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->OnLocalMuteStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->OnAudioPanValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->OnAudioReverbValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->OnReverbSelLClicked(); break;
        case 22: _t->OnReverbSelRClicked(); break;
        case 23: _t->OnConClientListMesReceived((*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[1]))); break;
        case 24: _t->OnChatTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->OnLicenceRequired((*reinterpret_cast< ELicenceType(*)>(_a[1]))); break;
        case 26: _t->OnChangeChanGain((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 27: _t->OnNewLocalInputText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->OnReqServerListQuery((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 29: _t->OnCreateCLServerListPingMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 30: _t->OnCreateCLServerListReqVerAndOSMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 31: _t->OnCreateCLServerListReqConnClientsListMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 32: _t->OnCLServerListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CServerInfo>(*)>(_a[2]))); break;
        case 33: _t->OnCLConnClientsListMesReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<CChannelInfo>(*)>(_a[2]))); break;
        case 34: _t->OnCLChannelLevelListReceived((*reinterpret_cast< CHostAddress(*)>(_a[1])),(*reinterpret_cast< CVector<uint16_t>(*)>(_a[2]))); break;
        case 35: _t->OnConnectDlgAccepted(); break;
        case 36: _t->OnConnectDlgAcceptedServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 37: _t->OnDisconnected(); break;
        case 38: _t->OnCentralServerAddressTypeChanged(); break;
        case 39: _t->OnGUIDesignChanged(); break;
        case 40: _t->OnDisplayChannelLevelsChanged(); break;
        case 41: _t->OnAudioChannelsChanged(); break;
        case 42: _t->OnNumClientsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->OnNewClientLevelChanged(); break;
        case 44: _t->accept(); break;
        case 45: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CClientDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CClientDlg.data,
      qt_meta_data_CClientDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CClientDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CClientDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CClientDlg.stringdata0))
        return static_cast<void*>(const_cast< CClientDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CClientDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
