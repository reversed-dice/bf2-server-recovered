// FUNCTION: BF2 0x476870
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IItemObject;

class IItemObject {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual int getItemIndex(); // slot 12 (0x60)
};

class IObject {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void* queryInterface(unsigned int iid); // slot 3 (0x18)
};

}

namespace {
bool itemIndexSort(world::IObject* a, world::IObject* b)
{
    world::IItemObject* ia = 0;
    if (a) {
        ia = (world::IItemObject*)a->queryInterface(world::IID_IItemObject);
    }
    int idxA = ia->getItemIndex();
    world::IItemObject* ib = 0;
    if (b) {
        ib = (world::IItemObject*)b->queryInterface(world::IID_IItemObject);
    }
    int idxB = ib->getItemIndex();
    return idxA < idxB;
}
}

} }
