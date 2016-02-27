/****************************************************************************
** Meta object code from reading C++ file 'myclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyGen/myclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyClass_t {
    QByteArrayData data[15];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyClass_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyClass_t qt_meta_stringdata_MyClass = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyClass"
QT_MOC_LITERAL(1, 8, 7), // "inGraph"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 15), // "QVector<double>"
QT_MOC_LITERAL(4, 33, 8), // "inGraph2"
QT_MOC_LITERAL(5, 42, 6), // "doWork"
QT_MOC_LITERAL(6, 49, 7), // "outData"
QT_MOC_LITERAL(7, 57, 1), // "u"
QT_MOC_LITERAL(8, 59, 1), // "i"
QT_MOC_LITERAL(9, 61, 1), // "o"
QT_MOC_LITERAL(10, 63, 7), // "doWork2"
QT_MOC_LITERAL(11, 71, 5), // "outCs"
QT_MOC_LITERAL(12, 77, 2), // "Cs"
QT_MOC_LITERAL(13, 80, 9), // "outSelect"
QT_MOC_LITERAL(14, 90, 8) // "filename"

    },
    "MyClass\0inGraph\0\0QVector<double>\0"
    "inGraph2\0doWork\0outData\0u\0i\0o\0doWork2\0"
    "outCs\0Cs\0outSelect\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyClass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   49,    2, 0x06 /* Public */,
       4,    4,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   71,    2, 0x0a /* Public */,
       6,    3,   72,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void MyClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyClass *_t = static_cast<MyClass *>(_o);
        switch (_id) {
        case 0: _t->inGraph((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3])),(*reinterpret_cast< QVector<double>(*)>(_a[4])),(*reinterpret_cast< QVector<double>(*)>(_a[5])),(*reinterpret_cast< QVector<double>(*)>(_a[6]))); break;
        case 1: _t->inGraph2((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3])),(*reinterpret_cast< QVector<double>(*)>(_a[4]))); break;
        case 2: _t->doWork(); break;
        case 3: _t->outData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->doWork2(); break;
        case 5: _t->outCs((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->outSelect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
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
            typedef void (MyClass::*_t)(QVector<double> , QVector<double> , QVector<double> , QVector<double> , QVector<double> , QVector<double> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyClass::inGraph)) {
                *result = 0;
            }
        }
        {
            typedef void (MyClass::*_t)(QVector<double> , QVector<double> , QVector<double> , QVector<double> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyClass::inGraph2)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MyClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyClass.data,
      qt_meta_data_MyClass,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyClass::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyClass.stringdata))
        return static_cast<void*>(const_cast< MyClass*>(this));
    return QObject::qt_metacast(_clname);
}

int MyClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyClass::inGraph(QVector<double> _t1, QVector<double> _t2, QVector<double> _t3, QVector<double> _t4, QVector<double> _t5, QVector<double> _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyClass::inGraph2(QVector<double> _t1, QVector<double> _t2, QVector<double> _t3, QVector<double> _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
