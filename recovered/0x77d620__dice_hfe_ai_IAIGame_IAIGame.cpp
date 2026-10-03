// FUNCTION: BF2 0x77d620
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77d620)(void*, std::string const&, void*);
void ctor_77d620(void** self) {
    *self = (void*)0xba2750;
    if (*(void**)0x010ade38 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_77d620 fn = *(vfn_77d620*)((char*)*(void**)cm + 0xa8);
        std::string s("IAIGame");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGame_IAIGame (0x77d620)
