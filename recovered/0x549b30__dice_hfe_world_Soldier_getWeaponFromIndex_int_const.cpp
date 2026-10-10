// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x549b30
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid) const;
};

class IItemObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual int getIndex() const;
};

class Soldier {
public:
    IObject* getWeaponFromIndex(int index) const;

    char m_pad[0x2b0];
    std::vector<IObject*> m_items;
};

IObject* Soldier::getWeaponFromIndex(int index) const
{
    for (unsigned int i = 0; i < m_items.size(); ++i) {
        IObject* o = m_items[i];
        if (o != 0) {
            IItemObject* w = (IItemObject*)o->queryInterface(*(unsigned int*)0xc7d0e8);
            if (w != 0 && w->getIndex() == index)
                return m_items[i];
        }
    }
    return 0;
}

} } }
