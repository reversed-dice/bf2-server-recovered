// FUNCTION: BF2 0x6217b0
// dice::hfe::world::DefaultDetonationComp refcount-release dtor
namespace dice { namespace hfe { namespace world {

struct RefCounted { int m_refs; void release() { if (--m_refs == 0) delete this; } };

struct ProjectileComp { virtual ~ProjectileComp() {} char _pad[0x18]; };
struct IProjectileDetonationComp { virtual ~IProjectileDetonationComp() {} };

class DefaultDetonationComp : public ProjectileComp, public IProjectileDetonationComp {
public:
    char _pad0x28[0x8];
    void* m_0x40;
    virtual ~DefaultDetonationComp();
};

DefaultDetonationComp::~DefaultDetonationComp() {
    RefCounted* p = (RefCounted*)m_0x40; if (p != 0) p->release();
}

} } }
