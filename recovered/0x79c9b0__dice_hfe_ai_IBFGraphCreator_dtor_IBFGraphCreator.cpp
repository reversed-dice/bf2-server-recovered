// FUNCTION: BF2 0x79c9b0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79c9b0)(void*, std::string const&);
void dtor_79c9b0(void** self) {
    *self = (void*)0xba7f90;
    if ((void*)self == *(void**)0x010add98) {
        void* cm = *(void**)0x010b3798;
        vfn_79c9b0 fn = *(vfn_79c9b0*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFGraphCreator");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFGraphCreator_dtor_IBFGraphCreator (0x79c9b0)
