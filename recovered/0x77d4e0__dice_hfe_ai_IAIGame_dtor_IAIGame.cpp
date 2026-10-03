// FUNCTION: BF2 0x77d4e0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77d4e0)(void*, std::string const&);
void dtor_77d4e0(void** self) {
    *self = (void*)0xba2750;
    if ((void*)self == *(void**)0x010ade38) {
        void* cm = *(void**)0x010b3798;
        vfn_77d4e0 fn = *(vfn_77d4e0*)((char*)*(void**)cm + 0xb0);
        std::string s("IAIGame");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGame_dtor_IAIGame (0x77d4e0)
