// FUNCTION: BF2 0x77d970
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77d970)(void*, std::string const&, void*);
void ctor_77d970(void** self) {
    *self = (void*)0xba2890;
    if (*(void**)0x010ade30 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_77d970 fn = *(vfn_77d970*)((char*)*(void**)cm + 0xa8);
        std::string s("IAIGameEffector");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIGameEffector_IAIGameEffector (0x77d970)
