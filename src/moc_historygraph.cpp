/****************************************************************************
** Meta object code from reading C++ file 'historygraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sagora-original/src/historygraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historygraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CJpegHistoryGraph_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CJpegHistoryGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CJpegHistoryGraph_t qt_meta_stringdata_CJpegHistoryGraph = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CJpegHistoryGraph"
QT_MOC_LITERAL(1, 18, 18), // "OnTimerDailyUpdate"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "CJpegHistoryGraph\0OnTimerDailyUpdate\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CJpegHistoryGraph[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CJpegHistoryGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CJpegHistoryGraph *_t = static_cast<CJpegHistoryGraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTimerDailyUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CJpegHistoryGraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CJpegHistoryGraph.data,
      qt_meta_data_CJpegHistoryGraph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CJpegHistoryGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CJpegHistoryGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CJpegHistoryGraph.stringdata0))
        return static_cast<void*>(const_cast< CJpegHistoryGraph*>(this));
    if (!strcmp(_clname, "AHistoryGraph"))
        return static_cast< AHistoryGraph*>(const_cast< CJpegHistoryGraph*>(this));
    return QObject::qt_metacast(_clname);
}

int CJpegHistoryGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CSvgHistoryGraph_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSvgHistoryGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSvgHistoryGraph_t qt_meta_stringdata_CSvgHistoryGraph = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CSvgHistoryGraph"
QT_MOC_LITERAL(1, 17, 18), // "OnTimerDailyUpdate"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "CSvgHistoryGraph\0OnTimerDailyUpdate\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSvgHistoryGraph[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CSvgHistoryGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSvgHistoryGraph *_t = static_cast<CSvgHistoryGraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTimerDailyUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CSvgHistoryGraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CSvgHistoryGraph.data,
      qt_meta_data_CSvgHistoryGraph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CSvgHistoryGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSvgHistoryGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CSvgHistoryGraph.stringdata0))
        return static_cast<void*>(const_cast< CSvgHistoryGraph*>(this));
    if (!strcmp(_clname, "AHistoryGraph"))
        return static_cast< AHistoryGraph*>(const_cast< CSvgHistoryGraph*>(this));
    return QObject::qt_metacast(_clname);
}

int CSvgHistoryGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
