// FUNCTION: BF2 0x77e480
#include <string>
namespace dice { namespace hfe {
extern void refresh_77e480();
typedef void (*vfn_77e480)(void*, std::string const&, void*);
void ctor_77e480(void** self) {
    *self = (void*)0xba2b70;
    if (*(void**)0x010ade40 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e480 fn = *(vfn_77e480*)((char*)*(void**)cm + 0xa8);
            std::string s("IAITerrain");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_77e480();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAITerrain_IAITerrain (0x77e480)
