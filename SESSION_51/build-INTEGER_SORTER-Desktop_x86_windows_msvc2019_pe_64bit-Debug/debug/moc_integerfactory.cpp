/****************************************************************************
** Meta object code from reading C++ file 'integerfactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../INTEGER_SORTER/integerfactory.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'integerfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSIntegerFactoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSIntegerFactoryENDCLASS = QtMocHelpers::stringData(
    "IntegerFactory",
    "foundEven",
    "",
    "foundOdd",
    "foundPrime",
    "showVectors"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIntegerFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIntegerFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIntegerFactoryENDCLASS_t qt_meta_stringdata_CLASSIntegerFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "IntegerFactory"
        QT_MOC_LITERAL(15, 9),  // "foundEven"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 8),  // "foundOdd"
        QT_MOC_LITERAL(35, 10),  // "foundPrime"
        QT_MOC_LITERAL(46, 11)   // "showVectors"
    },
    "IntegerFactory",
    "foundEven",
    "",
    "foundOdd",
    "foundPrime",
    "showVectors"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIntegerFactoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       3,    1,   41,    2, 0x06,    3 /* Public */,
       4,    1,   44,    2, 0x06,    5 /* Public */,
       5,    0,   47,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject IntegerFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSIntegerFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIntegerFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIntegerFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntegerFactory, std::true_type>,
        // method 'foundEven'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'foundOdd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'foundPrime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'showVectors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void IntegerFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IntegerFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foundEven((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->foundOdd((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->foundPrime((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 3: _t->showVectors(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IntegerFactory::*)(unsigned int );
            if (_t _q_method = &IntegerFactory::foundEven; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IntegerFactory::*)(unsigned int );
            if (_t _q_method = &IntegerFactory::foundOdd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IntegerFactory::*)(unsigned int );
            if (_t _q_method = &IntegerFactory::foundPrime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IntegerFactory::*)();
            if (_t _q_method = &IntegerFactory::showVectors; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *IntegerFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIntegerFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IntegerFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void IntegerFactory::foundEven(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IntegerFactory::foundOdd(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IntegerFactory::foundPrime(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IntegerFactory::showVectors()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
