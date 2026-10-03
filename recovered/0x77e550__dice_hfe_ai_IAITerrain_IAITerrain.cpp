// FUNCTION: BF2 0x77e550
#include <string>
namespace dice { namespace hfe {
extern void refresh_77e550();
typedef void (*vfn_77e550)(void*, std::string const&, void*);
void ctor_77e550(void** self) {
    *self = (void*)0xba2b70;
    if (*(void**)0x010ade40 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e550 fn = *(vfn_77e550*)((char*)*(void**)cm + 0xa8);
            std::string s("IAITerrain");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_77e550();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAITerrain_IAITerrain (0x77e550)
