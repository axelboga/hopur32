/****************************************************************************
** Meta object code from reading C++ file 'removeconnectionsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../week3/removeconnectionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'removeconnectionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RemoveConnectionsDialog_t {
    QByteArrayData data[11];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoveConnectionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoveConnectionsDialog_t qt_meta_stringdata_RemoveConnectionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RemoveConnectionsDialog"
QT_MOC_LITERAL(1, 24, 24), // "on_button_remove_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 37), // "displayScientistsForRemoveCon..."
QT_MOC_LITERAL(4, 88, 17), // "vector<Scientist>"
QT_MOC_LITERAL(5, 106, 10), // "scientists"
QT_MOC_LITERAL(6, 117, 40), // "displayAllScientistsForRemove..."
QT_MOC_LITERAL(7, 158, 36), // "displayComputersForRemoveConn..."
QT_MOC_LITERAL(8, 195, 16), // "vector<Computer>"
QT_MOC_LITERAL(9, 212, 9), // "computers"
QT_MOC_LITERAL(10, 222, 39) // "displayAllComputersForRemoveC..."

    },
    "RemoveConnectionsDialog\0"
    "on_button_remove_clicked\0\0"
    "displayScientistsForRemoveConnections\0"
    "vector<Scientist>\0scientists\0"
    "displayAllScientistsForRemoveConnections\0"
    "displayComputersForRemoveConnections\0"
    "vector<Computer>\0computers\0"
    "displayAllComputersForRemoveConnections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoveConnectionsDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
      10,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void RemoveConnectionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoveConnectionsDialog *_t = static_cast<RemoveConnectionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_remove_clicked(); break;
        case 1: _t->displayScientistsForRemoveConnections((*reinterpret_cast< vector<Scientist>(*)>(_a[1]))); break;
        case 2: _t->displayAllScientistsForRemoveConnections(); break;
        case 3: _t->displayComputersForRemoveConnections((*reinterpret_cast< vector<Computer>(*)>(_a[1]))); break;
        case 4: _t->displayAllComputersForRemoveConnections(); break;
        default: ;
        }
    }
}

const QMetaObject RemoveConnectionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RemoveConnectionsDialog.data,
      qt_meta_data_RemoveConnectionsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoveConnectionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoveConnectionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoveConnectionsDialog.stringdata0))
        return static_cast<void*>(const_cast< RemoveConnectionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RemoveConnectionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
