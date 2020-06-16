/****************************************************************************
** Meta object code from reading C++ file 'util.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/util.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'util.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CAboutDlg_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAboutDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAboutDlg_t qt_meta_stringdata_CAboutDlg = {
    {
QT_MOC_LITERAL(0, 0, 9) // "CAboutDlg"

    },
    "CAboutDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAboutDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CAboutDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CAboutDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAboutDlg.data,
      qt_meta_data_CAboutDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CAboutDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAboutDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CAboutDlg.stringdata0))
        return static_cast<void*>(const_cast< CAboutDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAboutDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CLicenceDlg_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLicenceDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLicenceDlg_t qt_meta_stringdata_CLicenceDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CLicenceDlg"
QT_MOC_LITERAL(1, 12, 19), // "OnAgreeStateChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5) // "value"

    },
    "CLicenceDlg\0OnAgreeStateChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLicenceDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CLicenceDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CLicenceDlg *_t = static_cast<CLicenceDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAgreeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CLicenceDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CLicenceDlg.data,
      qt_meta_data_CLicenceDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CLicenceDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLicenceDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CLicenceDlg.stringdata0))
        return static_cast<void*>(const_cast< CLicenceDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CLicenceDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CMusProfDlg_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMusProfDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMusProfDlg_t qt_meta_stringdata_CMusProfDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CMusProfDlg"
QT_MOC_LITERAL(1, 12, 18), // "OnAliasTextChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "strNewName"
QT_MOC_LITERAL(4, 43, 21), // "OnInstrumentActivated"
QT_MOC_LITERAL(5, 65, 14), // "iCntryListItem"
QT_MOC_LITERAL(6, 80, 18), // "OnCountryActivated"
QT_MOC_LITERAL(7, 99, 17), // "OnCityTextChanged"
QT_MOC_LITERAL(8, 117, 16) // "OnSkillActivated"

    },
    "CMusProfDlg\0OnAliasTextChanged\0\0"
    "strNewName\0OnInstrumentActivated\0"
    "iCntryListItem\0OnCountryActivated\0"
    "OnCityTextChanged\0OnSkillActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMusProfDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CMusProfDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMusProfDlg *_t = static_cast<CMusProfDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAliasTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OnInstrumentActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnCountryActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCityTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnSkillActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CMusProfDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMusProfDlg.data,
      qt_meta_data_CMusProfDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CMusProfDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMusProfDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CMusProfDlg.stringdata0))
        return static_cast<void*>(const_cast< CMusProfDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMusProfDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_CHelpMenu_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CHelpMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CHelpMenu_t qt_meta_stringdata_CHelpMenu = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CHelpMenu"
QT_MOC_LITERAL(1, 10, 15), // "OnHelpWhatsThis"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "OnHelpAbout"
QT_MOC_LITERAL(4, 39, 18) // "OnHelpDownloadLink"

    },
    "CHelpMenu\0OnHelpWhatsThis\0\0OnHelpAbout\0"
    "OnHelpDownloadLink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CHelpMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CHelpMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CHelpMenu *_t = static_cast<CHelpMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnHelpWhatsThis(); break;
        case 1: _t->OnHelpAbout(); break;
        case 2: _t->OnHelpDownloadLink(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CHelpMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_CHelpMenu.data,
      qt_meta_data_CHelpMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CHelpMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CHelpMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CHelpMenu.stringdata0))
        return static_cast<void*>(const_cast< CHelpMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int CHelpMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
