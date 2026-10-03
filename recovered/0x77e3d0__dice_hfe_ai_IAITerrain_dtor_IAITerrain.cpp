// FUNCTION: BF2 0x77e3d0
#include <string>
namespace dice { namespace hfe {
extern void post_77e3d0();
typedef void (*vfn_77e3d0)(void*, std::string const&);
void dtor_77e3d0(void** self) {
    *self = (void*)0xba2b70;
    if ((void*)self == *(void**)0x010ade40) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e3d0 fn = *(vfn_77e3d0*)((char*)*(void**)cm + 0xb0);
            std::string s("IAITerrain");
            fn(*(void**)0x010b3798, s);
        }
        post_77e3d0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAITerrain_dtor_IAITerrain (0x77e3d0)
