// FUNCTION: BF2 0x5925d0
#include <string>
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_5925d0)(void*, std::string const&);
typedef void* (*mfn_5925d0)(void*, void*);
extern void base_ctor_5925d0(void*, void*);
extern void update_flags_5925d0(void*, unsigned int, unsigned int);

// `cached` has to be a real struct field, not pointer arithmetic: it is
// assigned twice around the lookup call, and in the arithmetic form GCC 4.0
// hoists its address into a spare callee-saved register (79.21%).
struct Obj_5925d0 {
    void* vptr;
    char  pad0[256 - 8];
    void* vptr_sub;
    char  pad1[536 - 256 - 8];
    void* cached;
};

void ctor_5925d0(Obj_5925d0* self, void* tmpl) {
    base_ctor_5925d0(self, tmpl);
    self->vptr = (void*)0xb5dd50;
    self->vptr_sub = (void*)0xb5e060;
    self->cached = 0;
    update_flags_5925d0(self, 0x1802, 0);
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5925d0 fn = *(vfn_5925d0*)((char*)*(void**)cm + 0x98);
        std::string s("DecalManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_5925d0 g = *(mfn_5925d0*)((char*)*(void**)m + 0x28);
        self->cached = g(m, self);
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EditableDecal_EditableDecal_dice_hfe_world_DecalTemplate_constptr (0x5925d0)
