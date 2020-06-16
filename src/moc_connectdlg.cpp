/****************************************************************************
** Meta object code from reading C++ file 'connectdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/connectdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CConnectDlg_t {
    QByteArrayData data[19];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CConnectDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CConnectDlg_t qt_meta_stringdata_CConnectDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CConnectDlg"
QT_MOC_LITERAL(1, 12, 18), // "ReqServerListQuery"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "CHostAddress"
QT_MOC_LITERAL(4, 45, 8), // "InetAddr"
QT_MOC_LITERAL(5, 54, 25), // "CreateCLServerListPingMes"
QT_MOC_LITERAL(6, 80, 32), // "CreateCLServerListReqVerAndOSMes"
QT_MOC_LITERAL(7, 113, 39), // "CreateCLServerListReqConnClie..."
QT_MOC_LITERAL(8, 153, 32), // "OnServerListItemSelectionChanged"
QT_MOC_LITERAL(9, 186, 29), // "OnServerListItemDoubleClicked"
QT_MOC_LITERAL(10, 216, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 233, 4), // "Item"
QT_MOC_LITERAL(12, 238, 27), // "OnServerAddrEditTextChanged"
QT_MOC_LITERAL(13, 266, 18), // "OnFilterTextEdited"
QT_MOC_LITERAL(14, 285, 23), // "OnExpandAllStateChanged"
QT_MOC_LITERAL(15, 309, 5), // "value"
QT_MOC_LITERAL(16, 315, 16), // "OnConnectClicked"
QT_MOC_LITERAL(17, 332, 11), // "OnTimerPing"
QT_MOC_LITERAL(18, 344, 24) // "OnTimerReRequestServList"

    },
    "CConnectDlg\0ReqServerListQuery\0\0"
    "CHostAddress\0InetAddr\0CreateCLServerListPingMes\0"
    "CreateCLServerListReqVerAndOSMes\0"
    "CreateCLServerListReqConnClientsListMes\0"
    "OnServerListItemSelectionChanged\0"
    "OnServerListItemDoubleClicked\0"
    "QTreeWidgetItem*\0Item\0OnServerAddrEditTextChanged\0"
    "OnFilterTextEdited\0OnExpandAllStateChanged\0"
    "value\0OnConnectClicked\0OnTimerPing\0"
    "OnTimerReRequestServList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CConnectDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   86,    2, 0x0a /* Public */,
       9,    2,   87,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,
      17,    0,  102,    2, 0x0a /* Public */,
      18,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CConnectDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CConnectDlg *_t = static_cast<CConnectDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReqServerListQuery((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 1: _t->CreateCLServerListPingMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 2: _t->CreateCLServerListReqVerAndOSMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 3: _t->CreateCLServerListReqConnClientsListMes((*reinterpret_cast< CHostAddress(*)>(_a[1]))); break;
        case 4: _t->OnServerListItemSelectionChanged(); break;
        case 5: _t->OnServerListItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->OnServerAddrEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnFilterTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->OnExpandAllStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->OnConnectClicked(); break;
        case 10: _t->OnTimerPing(); break;
        case 11: _t->OnTimerReRequestServList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CConnectDlg::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectDlg::ReqServerListQuery)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CConnectDlg::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectDlg::CreateCLServerListPingMes)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CConnectDlg::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectDlg::CreateCLServerListReqVerAndOSMes)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CConnectDlg::*_t)(CHostAddress );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectDlg::CreateCLServerListReqConnClientsListMes)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CConnectDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CConnectDlg.data,
      qt_meta_data_CConnectDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CConnectDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CConnectDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CConnectDlg.stringdata0))
        return static_cast<void*>(const_cast< CConnectDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CConnectDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CConnectDlg::ReqServerListQuery(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CConnectDlg::CreateCLServerListPingMes(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CConnectDlg::CreateCLServerListReqVerAndOSMes(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CConnectDlg::CreateCLServerListReqConnClientsListMes(CHostAddress _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
