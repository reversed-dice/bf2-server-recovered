// FUNCTION: BF2 0x77d780
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77d780)(void*, std::string const&);
void dtor_77d780(void** self) {
    *self = (void*)0xba2890;
    if ((void*)self == *(void**)0x010ade30) {
        void* cm = *(void**)0x010b3798;
        vfn_77d780 fn = *(vfn_77d780*)((char*)*(void**)cm + 0xb0);
        std::string s("IAIGameEffector");
        fn(*(void**)0x010b3798, s);
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGameEffector_dtor_IAIGameEffector (0x77d780)
