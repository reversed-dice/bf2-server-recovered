// FUNCTION: BF2 0x54c390
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

bool isPhysicsDisabled(void* obj);
void disablePhysics(void* obj, bool on);

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
};

void updateFlagsRecursive(IObject* obj, unsigned int add, unsigned int remove);

typedef void (*ItemFn)(void*, IObject*);

class Soldier {
public:
    bool addItem(IObject* obj, int index);

    char m_pad[0x380];
    std::vector<IObject*> m_items;
};

typedef void* (*GetNameFn)(void* self);

bool Soldier::addItem(IObject* obj, int index)
{
    if (obj == 0)
        return false;

    IItemObject* io = (IItemObject*)obj->queryInterface(IID_IItemObject);
    if (io == 0)
    {
        dice::hfe::Debug(6, std::string("Game/Objects/Game/Soldier.cpp"), 0x995, std::string(""))
            .os << "TBM: addItem(), not an item: "
                << *(std::string const*)((GetNameFn)(*(void***)obj->m_template)[0x58 / 8])(obj->m_template);
        return false;
    }

    if (index == -1)
        index = ((int (*)(IItemObject*))(*(void***)io)[0x60 / 8])(io);

    if (index <= 0 || index >= (int)m_items.size())
    {
        dice::hfe::Debug(6, std::string("Game/Objects/Game/Soldier.cpp"), 0x99e, std::string(""))
            .os << "illegal item index, item->getItemIndex() = " << index;
        return false;
    }

    if (m_items[index] != 0)
    {
        dice::hfe::Debug(6, std::string("Game/Objects/Game/Soldier.cpp"), 0x9a5, std::string(""))
            .os << "TBM: force remove item! check that the Kits are correct!!";
        return false;
    }

    m_items[index] = obj;

    if (dice::hfe::isPhysicsDisabled(this))
        dice::hfe::disablePhysics(obj, true);

    if (obj->queryInterface(IID_IWeaponObject) != 0)
        ((ItemFn)(*(void***)this)[0x380 / 8])(this, obj);

    ((void (*)(IObject*, int, int))(*(void***)obj)[0xc0 / 8])(obj, 0, 0x100);

    updateFlagsRecursive(obj, 0, 0x100);

    return true;
}

} } }
