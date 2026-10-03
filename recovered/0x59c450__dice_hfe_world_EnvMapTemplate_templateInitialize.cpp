// FUNCTION: BF2 0x59c450
#include <string>
typedef void* (*lookup_59c450)(void*, std::string const&);
typedef void* (*makefn_59c450)(void*, void*);
typedef void* (*selffn_59c450)(void*);
typedef void  (*flagfn_59c450)(void*, int, int);

extern "C" void tmpl_init_59c450(char* self) {
    (*(flagfn_59c450*)(*(char**)self + 0x98))(self, 1, 0);
    void* cm = *(void**)0x010b3798;
    lookup_59c450 fn = *(lookup_59c450*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("EnvMapManager"));
    if (mgr != 0) {
        makefn_59c450 mk = *(makefn_59c450*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_59c450*)(*(char**)self + 0x58))(self);
        *(void**)(self + 0x1d0) = mk(mgr, x);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_templateInitialize (0x59c450)
