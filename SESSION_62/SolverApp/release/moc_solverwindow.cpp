/****************************************************************************
** Meta object code from reading C++ file 'solverwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../solverwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solverwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSSolverWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSolverWindowENDCLASS = QtMocHelpers::stringData(
    "SolverWindow",
    "launchGravitational",
    "",
    "launchColomb",
    "launchQuadratic",
    "launchAboutSolverDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSolverWindowENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[13];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSolverWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSolverWindowENDCLASS_t qt_meta_stringdata_CLASSSolverWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "SolverWindow"
        QT_MOC_LITERAL(13, 19),  // "launchGravitational"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 12),  // "launchColomb"
        QT_MOC_LITERAL(47, 15),  // "launchQuadratic"
        QT_MOC_LITERAL(63, 23)   // "launchAboutSolverDialog"
    },
    "SolverWindow",
    "launchGravitational",
    "",
    "launchColomb",
    "launchQuadratic",
    "launchAboutSolverDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSolverWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SolverWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSSolverWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSolverWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSolverWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SolverWindow, std::true_type>,
        // method 'launchGravitational'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'launchColomb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'launchQuadratic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'launchAboutSolverDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SolverWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolverWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->launchGravitational(); break;
        case 1: _t->launchColomb(); break;
        case 2: _t->launchQuadratic(); break;
        case 3: _t->launchAboutSolverDialog(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SolverWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolverWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSolverWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SolverWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
