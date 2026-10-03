// FUNCTION: BF2 0x5ac7c0
#include <string>
typedef void* (*lookup_5ac7c0)(void*, std::string const&);
typedef void* (*makefn_5ac7c0)(void*, int, void*);
typedef void* (*selffn_5ac7c0)(void*);
typedef void  (*setname_5ac7c0)(void*, std::string const&);
extern "C" void set_emit_radius_5ac7c0(void*, const void*);
struct Trail_5ac7c0 { char pad[0x80]; void* ps; };
extern "C" void tmpl_init_5ac7c0(Trail_5ac7c0* self) {
    void* cm = *(void**)0x010b3798;
    lookup_5ac7c0 fn = *(lookup_5ac7c0*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        makefn_5ac7c0 mk = *(makefn_5ac7c0*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_5ac7c0*)(*(char**)self + 0x58))(self);
        self->ps = mk(mgr, 2, x);
        setname_5ac7c0 sn = *(setname_5ac7c0*)(*(char**)self + 0x200);
        sn(self, std::string("Standard"));
        float one = 1.0f;
        float v[3];
        v[0] = one;
        v[1] = one;
        v[2] = 0.0f;
        set_emit_radius_5ac7c0(self, v);
        if (self->ps != 0)
            (*(selffn_5ac7c0*)(*(char**)self->ps + 0x18))(self->ps);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_TrailSystemTemplate_templateInitialize (0x5ac7c0)
