// FUNCTION: BF2 0x592410
#include <string>
typedef void* (*lookup_592410)(void*, std::string const&);
typedef void* (*makefn_592410)(void*, void*);
typedef void* (*selffn_592410)(void*);
typedef void  (*flagfn_592410)(void*, int, int);

// `decal` is written inside the guard then read back after it, so it has to be
// a struct field: as plain indexing GCC hoists its address into a fourth
// callee-saved register and the frame grows 0x28 -> 0x38 (80.36%).
struct Decal_592410 { char pad[0x70]; void* decal; };

extern "C" void tmpl_init_592410(Decal_592410* self) {
    (*(flagfn_592410*)(*(char**)self + 0x98))(self, 1, 0);
    void* cm = *(void**)0x010b3798;
    lookup_592410 fn = *(lookup_592410*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("DecalManager"));
    if (mgr != 0) {
        makefn_592410 mk = *(makefn_592410*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_592410*)(*(char**)self + 0x58))(self);
        self->decal = mk(mgr, x);
    }
    if (self->decal != 0)
        (*(selffn_592410*)(*(char**)self->decal + 0x8))(self->decal);
}
// REVERSED_FUNCTION: dice_hfe_world_DecalTemplate_templateInitialize (0x592410)
