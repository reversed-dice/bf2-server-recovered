// FUNCTION: BF2 0x78bc40
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_78bc40)(void*, std::string const&);
void dtor_78bc40(void** self) {
    *self = (void*)0xba5010;
    if ((void*)self == *(void**)0x010ade60) {
        void* cm = *(void**)0x010b3798;
        vfn_78bc40 fn = *(vfn_78bc40*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFTimer");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFTimer_dtor_IBFTimer (0x78bc40)
