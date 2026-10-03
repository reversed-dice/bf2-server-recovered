// FUNCTION: BF2 0x79ccc0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79ccc0)(void*, std::string const&);
void dtor_79ccc0(void** self) {
    *self = (void*)0xba7ff0;
    if ((void*)self == *(void**)0x010add80) {
        void* cm = *(void**)0x010b3798;
        vfn_79ccc0 fn = *(vfn_79ccc0*)((char*)*(void**)cm + 0xb0);
        std::string s("IDebugRenderer");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IDebugRenderer_dtor_IDebugRenderer (0x79ccc0)
