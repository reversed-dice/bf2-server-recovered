// FUNCTION: BF2 0x77df00
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77df00)(void*, std::string const&);
void dtor_77df00(void** self) {
    *self = (void*)0xba2af0;
    if ((void*)self == *(void**)0x010ade20) {
        void* cm = *(void**)0x010b3798;
        vfn_77df00 fn = *(vfn_77df00*)((char*)*(void**)cm + 0xb0);
        std::string s("IAIPhysics");
        fn(*(void**)0x010b3798, s);
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPhysics_dtor_IAIPhysics (0x77df00)
