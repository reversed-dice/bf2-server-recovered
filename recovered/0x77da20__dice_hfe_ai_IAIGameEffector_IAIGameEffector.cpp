// FUNCTION: BF2 0x77da20
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77da20)(void*, std::string const&, void*);
void ctor_77da20(void** self) {
    *self = (void*)0xba2890;
    if (*(void**)0x010ade30 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_77da20 fn = *(vfn_77da20*)((char*)*(void**)cm + 0xa8);
        std::string s("IAIGameEffector");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGameEffector_IAIGameEffector (0x77da20)
