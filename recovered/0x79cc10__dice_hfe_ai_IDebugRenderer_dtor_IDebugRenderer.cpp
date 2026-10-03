// FUNCTION: BF2 0x79cc10
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79cc10)(void*, std::string const&);
void dtor_79cc10(void** self) {
    *self = (void*)0xba7ff0;
    if ((void*)self == *(void**)0x010add80) {
        void* cm = *(void**)0x010b3798;
        vfn_79cc10 fn = *(vfn_79cc10*)((char*)*(void**)cm + 0xb0);
        std::string s("IDebugRenderer");
        fn(*(void**)0x010b3798, s);
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IDebugRenderer_dtor_IDebugRenderer (0x79cc10)
