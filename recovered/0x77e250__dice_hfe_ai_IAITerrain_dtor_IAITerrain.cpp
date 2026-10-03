// FUNCTION: BF2 0x77e250
#include <string>
namespace dice { namespace hfe {
extern void refresh_77e250();
typedef void (*vfn_77e250)(void*, std::string const&);
void dtor_77e250(void** self) {
    *self = (void*)0xba2b70;
    if ((void*)self == *(void**)0x010ade40) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e250 fn = *(vfn_77e250*)((char*)*(void**)cm + 0xb0);
            std::string s("IAITerrain");
            fn(*(void**)0x010b3798, s);
        }
        refresh_77e250();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAITerrain_dtor_IAITerrain (0x77e250)
