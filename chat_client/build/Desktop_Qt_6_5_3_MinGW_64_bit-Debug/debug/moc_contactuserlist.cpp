/****************************************************************************
** Meta object code from reading C++ file 'contactuserlist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../contactuserlist.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactuserlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSContactUserListENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSContactUserListENDCLASS = QtMocHelpers::stringData(
    "ContactUserList",
    "sig_loading_contact_user",
    "",
    "sig_switch_apply_friend_page",
    "sig_switch_friend_info_page",
    "std::shared_ptr<UserInfo>",
    "user_info",
    "slot_item_clicked",
    "QListWidgetItem*",
    "item",
    "slot_add_auth_firend",
    "std::shared_ptr<AuthInfo>",
    "slot_auth_rsp",
    "std::shared_ptr<AuthRsp>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSContactUserListENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[16];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[28];
    char stringdata5[26];
    char stringdata6[10];
    char stringdata7[18];
    char stringdata8[17];
    char stringdata9[5];
    char stringdata10[21];
    char stringdata11[26];
    char stringdata12[14];
    char stringdata13[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSContactUserListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSContactUserListENDCLASS_t qt_meta_stringdata_CLASSContactUserListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ContactUserList"
        QT_MOC_LITERAL(16, 24),  // "sig_loading_contact_user"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 28),  // "sig_switch_apply_friend_page"
        QT_MOC_LITERAL(71, 27),  // "sig_switch_friend_info_page"
        QT_MOC_LITERAL(99, 25),  // "std::shared_ptr<UserInfo>"
        QT_MOC_LITERAL(125, 9),  // "user_info"
        QT_MOC_LITERAL(135, 17),  // "slot_item_clicked"
        QT_MOC_LITERAL(153, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(170, 4),  // "item"
        QT_MOC_LITERAL(175, 20),  // "slot_add_auth_firend"
        QT_MOC_LITERAL(196, 25),  // "std::shared_ptr<AuthInfo>"
        QT_MOC_LITERAL(222, 13),  // "slot_auth_rsp"
        QT_MOC_LITERAL(236, 24)   // "std::shared_ptr<AuthRsp>"
    },
    "ContactUserList",
    "sig_loading_contact_user",
    "",
    "sig_switch_apply_friend_page",
    "sig_switch_friend_info_page",
    "std::shared_ptr<UserInfo>",
    "user_info",
    "slot_item_clicked",
    "QListWidgetItem*",
    "item",
    "slot_add_auth_firend",
    "std::shared_ptr<AuthInfo>",
    "slot_auth_rsp",
    "std::shared_ptr<AuthRsp>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSContactUserListENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    1,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   55,    2, 0x0a,    5 /* Public */,
      10,    1,   58,    2, 0x0a,    7 /* Public */,
      12,    1,   61,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ContactUserList::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSContactUserListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSContactUserListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSContactUserListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ContactUserList, std::true_type>,
        // method 'sig_loading_contact_user'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sig_switch_apply_friend_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sig_switch_friend_info_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<UserInfo>, std::false_type>,
        // method 'slot_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'slot_add_auth_firend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthInfo>, std::false_type>,
        // method 'slot_auth_rsp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthRsp>, std::false_type>
    >,
    nullptr
} };

void ContactUserList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactUserList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_loading_contact_user(); break;
        case 1: _t->sig_switch_apply_friend_page(); break;
        case 2: _t->sig_switch_friend_info_page((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<UserInfo>>>(_a[1]))); break;
        case 3: _t->slot_item_clicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 4: _t->slot_add_auth_firend((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthInfo>>>(_a[1]))); break;
        case 5: _t->slot_auth_rsp((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthRsp>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactUserList::*)();
            if (_t _q_method = &ContactUserList::sig_loading_contact_user; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactUserList::*)();
            if (_t _q_method = &ContactUserList::sig_switch_apply_friend_page; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactUserList::*)(std::shared_ptr<UserInfo> );
            if (_t _q_method = &ContactUserList::sig_switch_friend_info_page; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ContactUserList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactUserList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSContactUserListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int ContactUserList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ContactUserList::sig_loading_contact_user()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactUserList::sig_switch_apply_friend_page()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContactUserList::sig_switch_friend_info_page(std::shared_ptr<UserInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
