// FUNCTION: BF2 0x59c370
#include <string>
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_59c370)(void*, std::string const&);
typedef void* (*mfn_59c370)(void*, void*);
extern void base_ctor_59c370(void*, void*);
extern void update_flags_59c370(void*, unsigned int, unsigned int);

// `cached` has to be a real struct field, not pointer arithmetic: it is
// assigned twice around the lookup call, and in the arithmetic form GCC 4.0
// hoists its address into a spare callee-saved register (79.21%).
struct Obj_59c370 {
    void* vptr;
    char  pad0[256 - 8];
    void* vptr_sub;
    char  pad1[560 - 256 - 8];
    void* cached;
};

void ctor_59c370(Obj_59c370* self, void* tmpl) {
    base_ctor_59c370(self, tmpl);
    self->vptr = (void*)0xb607b0;
    self->vptr_sub = (void*)0xb60ac8;
    self->cached = 0;
    update_flags_59c370(self, 0x1802, 0);
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_59c370 fn = *(vfn_59c370*)((char*)*(void**)cm + 0x98);
        std::string s("EnvMapManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_59c370 g = *(mfn_59c370*)((char*)*(void**)m + 0x28);
        self->cached = g(m, self);
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EditableEnvMapObject_EditableEnvMapObject_dice_hfe_world_EnvMapTemplate_constptr (0x59c370)
