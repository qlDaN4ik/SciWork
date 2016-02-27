/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyGen/mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyThread_t {
    QByteArrayData data[10];
    char stringdata[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyThread_t qt_meta_stringdata_MyThread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyThread"
QT_MOC_LITERAL(1, 9, 7), // "inGraph"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "QVector<double>"
QT_MOC_LITERAL(4, 34, 6), // "doWork"
QT_MOC_LITERAL(5, 41, 7), // "outData"
QT_MOC_LITERAL(6, 49, 2), // "fi"
QT_MOC_LITERAL(7, 52, 1), // "u"
QT_MOC_LITERAL(8, 54, 1), // "i"
QT_MOC_LITERAL(9, 56, 1) // "o"

    },
    "MyThread\0inGraph\0\0QVector<double>\0"
    "doWork\0outData\0fi\0u\0i\0o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   34,    2, 0x0a /* Public */,
       5,    4,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,

       0        // eod
};

void MyThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyThread *_t = static_cast<MyThread *>(_o);
        switch (_id) {
        case 0: _t->inGraph((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 1: _t->doWork(); break;
        case 2: _t->outData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyThread::*_t)(QVector<double> , QVector<double> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThread::inGraph)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MyThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyThread.data,
      qt_meta_data_MyThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyThread.stringdata))
        return static_cast<void*>(const_cast< MyThread*>(this));
    return QObject::qt_metacast(_clname);
}

int MyThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MyThread::inGraph(QVector<double> _t1, QVector<double> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
