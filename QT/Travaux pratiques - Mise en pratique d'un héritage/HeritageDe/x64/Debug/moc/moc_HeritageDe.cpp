/****************************************************************************
** Meta object code from reading C++ file 'HeritageDe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../HeritageDe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeritageDe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HeritageDe_t {
    QByteArrayData data[12];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeritageDe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeritageDe_t qt_meta_stringdata_HeritageDe = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HeritageDe"
QT_MOC_LITERAL(1, 11, 12), // "onDeSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "onDeTire"
QT_MOC_LITERAL(4, 34, 17), // "onDeAfficheValeur"
QT_MOC_LITERAL(5, 52, 16), // "onDeAfficheTotal"
QT_MOC_LITERAL(6, 69, 7), // "onDeRAZ"
QT_MOC_LITERAL(7, 77, 17), // "onDeHistoSelected"
QT_MOC_LITERAL(8, 95, 13), // "onDeHistoTire"
QT_MOC_LITERAL(9, 109, 22), // "onDeHistoAfficheValeur"
QT_MOC_LITERAL(10, 132, 17), // "onDeHistoMultiJet"
QT_MOC_LITERAL(11, 150, 14) // "onHistoUpdated"

    },
    "HeritageDe\0onDeSelected\0\0onDeTire\0"
    "onDeAfficheValeur\0onDeAfficheTotal\0"
    "onDeRAZ\0onDeHistoSelected\0onDeHistoTire\0"
    "onDeHistoAfficheValeur\0onDeHistoMultiJet\0"
    "onHistoUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeritageDe[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HeritageDe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeritageDe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeSelected(); break;
        case 1: _t->onDeTire(); break;
        case 2: _t->onDeAfficheValeur(); break;
        case 3: _t->onDeAfficheTotal(); break;
        case 4: _t->onDeRAZ(); break;
        case 5: _t->onDeHistoSelected(); break;
        case 6: _t->onDeHistoTire(); break;
        case 7: _t->onDeHistoAfficheValeur(); break;
        case 8: _t->onDeHistoMultiJet(); break;
        case 9: _t->onHistoUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HeritageDe::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HeritageDe.data,
    qt_meta_data_HeritageDe,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HeritageDe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeritageDe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HeritageDe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HeritageDe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
