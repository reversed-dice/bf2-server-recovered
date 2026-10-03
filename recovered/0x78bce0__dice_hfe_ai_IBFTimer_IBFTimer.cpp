// FUNCTION: BF2 0x78bce0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_78bce0)(void*, std::string const&, void*);
void ctor_78bce0(void** self) {
    *self = (void*)0xba5010;
    if (*(void**)0x010ade60 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_78bce0 fn = *(vfn_78bce0*)((char*)*(void**)cm + 0xa8);
        std::string s("IBFTimer");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFTimer_IBFTimer (0x78bce0)
