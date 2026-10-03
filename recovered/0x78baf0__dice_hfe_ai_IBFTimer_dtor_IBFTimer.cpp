// FUNCTION: BF2 0x78baf0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_78baf0)(void*, std::string const&);
void dtor_78baf0(void** self) {
    *self = (void*)0xba5010;
    if ((void*)self == *(void**)0x010ade60) {
        void* cm = *(void**)0x010b3798;
        vfn_78baf0 fn = *(vfn_78baf0*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFTimer");
        fn(*(void**)0x010b3798, s);
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFTimer_dtor_IBFTimer (0x78baf0)
