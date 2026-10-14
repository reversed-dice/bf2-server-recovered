// FUNCTION: BF2 0x5ed9d0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

class RefCounted { public: int m_refs; void addRef() { ++m_refs; } void release() { if (--m_refs == 0) delete this; } };
class WeakPtr {
public:
    RefCounted* m_h;
    WeakPtr() : m_h(0) {}
    WeakPtr(WeakPtr const& o) : m_h(o.m_h) { if (m_h) m_h->addRef(); }
    ~WeakPtr() { if (m_h) m_h->release(); }
};

class AmmoComp { public: char _pad[0x18]; virtual ~AmmoComp(); };

struct Deleter { void* p; ~Deleter() { if (p) ::operator delete(p); } };

class ReplenishingAmmoComp : public AmmoComp {
public:
    char _pad0[0x70];
    Deleter m_90;
    char _pad1[0x28];
    std::vector<WeakPtr> m_c0;
    virtual ~ReplenishingAmmoComp();
};

ReplenishingAmmoComp::~ReplenishingAmmoComp()
{
    *(void**)((char*)this + 0x0) = (void*)0xb70b90;
    *(void**)((char*)this + 0x20) = (void*)0xb70d98;
}

} } }
