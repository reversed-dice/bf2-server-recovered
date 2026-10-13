// FUNCTION: BF2 0x607bc0
// BF2_FLAGS: -fno-reorder-blocks
#include <string>

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IProjectileObject;

struct WeaponFireEvent {
    char pad[8];
    void* m_8;      // +0x08
    char pad2[0x38];
    void* m_48;     // +0x48
};

struct TargetComp {
    void postFire(WeaponFireEvent& event);
};

struct SimpleTargetComp {
    char pad[0x48];
    void* m_48;     // +0x48
};

typedef void (*Fnv49)(void*, void*);

void SimpleTargetComp_postFire(SimpleTargetComp* self, WeaponFireEvent& event) {
    ((TargetComp*)self)->postFire(event);
    if (event.m_8 != 0) {
        void* p = ((void* (*)(void*, unsigned int))(*(void***)event.m_8)[3])(event.m_8, IID_IProjectileObject);
        ((Fnv49)(*(void***)p)[49])(p, self->m_48 != 0 ? *(void**)((char*)self->m_48 + 8) : 0);
    }
}

} } }
