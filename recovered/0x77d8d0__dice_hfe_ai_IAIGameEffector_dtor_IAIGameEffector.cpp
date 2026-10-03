// FUNCTION: BF2 0x77d8d0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77d8d0)(void*, std::string const&);
void dtor_77d8d0(void** self) {
    *self = (void*)0xba2890;
    if ((void*)self == *(void**)0x010ade30) {
        void* cm = *(void**)0x010b3798;
        vfn_77d8d0 fn = *(vfn_77d8d0*)((char*)*(void**)cm + 0xb0);
        std::string s("IAIGameEffector");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGameEffector_dtor_IAIGameEffector (0x77d8d0)
