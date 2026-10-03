// FUNCTION: BF2 0x78bd90
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_78bd90)(void*, std::string const&, void*);
void ctor_78bd90(void** self) {
    *self = (void*)0xba5010;
    if (*(void**)0x010ade60 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_78bd90 fn = *(vfn_78bd90*)((char*)*(void**)cm + 0xa8);
        std::string s("IBFTimer");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFTimer_IBFTimer (0x78bd90)
