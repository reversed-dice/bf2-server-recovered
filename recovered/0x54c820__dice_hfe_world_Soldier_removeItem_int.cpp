// FUNCTION: BF2 0x54c820
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>
#include <ostream>

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, std::string const& file, int line, std::string const& tag);
    ~Debug();
};

namespace world {

extern unsigned int IID_IItemObject;
extern unsigned int IID_IWeaponObject;

class IObject;

class IItemObject {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);

    char _pad[0x20];
    void* m_template;
    char _pad2[0x20];
    IObject* m_parentRef;
};

typedef void (*RemoveChildFn)(void*, IObject*);

class Soldier {
public:
    IObject* removeItem(int index);

    char m_pad[0x380];
    std::vector<IObject*> m_items;
};

extern void fn_549650(void* self, IObject* item);
extern void fn_43aa00(IObject* obj, bool enable);

IObject* Soldier::removeItem(int index)
{
    if (index <= 0 && index >= (int)m_items.size())
    {
        dice::hfe::Debug(6, std::string("Game/Objects/Game/Soldier.cpp"), 0x9d1, std::string(""))
            .os << "TBM: removeItem() wrong index:" << index;
        return 0;
    }

    IObject* item = m_items[index];
    if (item == 0)
        return 0;

    if (item->m_parentRef == (IObject*)this)
        ((RemoveChildFn)(*(void***)this)[0x1f0 / 8])(this, item);
    else if (item->m_parentRef != 0)
        dice::hfe::Debug(6, std::string("Game/Objects/Game/Soldier.cpp"), 0x9dd, std::string(""))
            .os << "TBM: Item have wrong parent";

    m_items[index] = 0;

    IItemObject* io = (IItemObject*)item->queryInterface(IID_IItemObject);
    ((void (*)(IItemObject*))(*(void***)io)[0x58 / 8])(io);

    fn_43aa00(item, false);

    if (item->queryInterface(IID_IWeaponObject) != 0)
        fn_549650(this, item);

    return item;
}

} } }
