// FUNCTION: BF2 0x78bba0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_78bba0)(void*, std::string const&);
void dtor_78bba0(void** self) {
    *self = (void*)0xba5010;
    if ((void*)self == *(void**)0x010ade60) {
        void* cm = *(void**)0x010b3798;
        vfn_78bba0 fn = *(vfn_78bba0*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFTimer");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFTimer_dtor_IBFTimer (0x78bba0)
