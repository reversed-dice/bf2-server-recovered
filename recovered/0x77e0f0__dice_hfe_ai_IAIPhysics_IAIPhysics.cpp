// FUNCTION: BF2 0x77e0f0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77e0f0)(void*, std::string const&, void*);
void ctor_77e0f0(void** self) {
    *self = (void*)0xba2af0;
    if (*(void**)0x010ade20 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_77e0f0 fn = *(vfn_77e0f0*)((char*)*(void**)cm + 0xa8);
        std::string s("IAIPhysics");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPhysics_IAIPhysics (0x77e0f0)
