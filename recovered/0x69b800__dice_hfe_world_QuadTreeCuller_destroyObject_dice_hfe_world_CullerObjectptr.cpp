// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x69b800
#include <list>
#include <vector>
namespace dice { namespace hfe { namespace world {

class Holder;

struct HolderRef {
    Holder* m_holder;
    std::list<Holder*>::iterator m_it;
};

class Holder {
public:
    int m_ref;
    char m_pad0[4];
    Holder* m_next;
    char m_pad1[0x40 - 0x10];
    std::list<Holder*> m_list;
};

class ObjectHolder {
public:
    virtual void v0();
    char m_pad0[0x30 - 8];
    std::vector<HolderRef> m_refs;
};

struct QuadTreeCuller {
    char m_pad0[0xc];
    int m_refCount;
    void destroyObject(ObjectHolder* obj);
};

void QuadTreeCuller::destroyObject(ObjectHolder* obj) {
    for (std::vector<HolderRef>::iterator it = obj->m_refs.begin(); it != obj->m_refs.end(); ++it) {
        Holder* q = it->m_holder;
        q->m_list.erase(it->m_it);
        for (; q != 0; q = q->m_next)
            --q->m_ref;
    }
    --m_refCount;
    if (obj != 0)
        delete obj;
}

} } }
