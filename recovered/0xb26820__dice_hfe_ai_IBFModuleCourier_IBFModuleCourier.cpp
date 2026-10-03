// FUNCTION: BF2 0xb26820
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_b26820)(void*, std::string const&, void*);
void ctor_b26820(void** self) {
    *self = (void*)0xca1dd0;
    if (*(void**)0x010addb8 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_b26820 fn = *(vfn_b26820*)((char*)*(void**)cm + 0xa8);
        std::string s("IBFModuleCourier");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFModuleCourier_IBFModuleCourier (0xb26820)
