// FUNCTION: BF2 0x77e320
#include <string>
namespace dice { namespace hfe {
extern void post_77e320();
typedef void (*vfn_77e320)(void*, std::string const&);
void dtor_77e320(void** self) {
    *self = (void*)0xba2b70;
    if ((void*)self == *(void**)0x010ade40) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e320 fn = *(vfn_77e320*)((char*)*(void**)cm + 0xb0);
            std::string s("IAITerrain");
            fn(*(void**)0x010b3798, s);
        }
        post_77e320();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAITerrain_dtor_IAITerrain (0x77e320)
