// FUNCTION: BF2 0xb26780
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_b26780)(void*, std::string const&);
void dtor_b26780(void** self) {
    *self = (void*)0xca1dd0;
    if ((void*)self == *(void**)0x010addb8) {
        void* cm = *(void**)0x010b3798;
        vfn_b26780 fn = *(vfn_b26780*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFModuleCourier");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFModuleCourier_dtor_IBFModuleCourier (0xb26780)
