// FUNCTION: BF2 0x79ceb0
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79ceb0)(void*, std::string const&, void*);
void ctor_79ceb0(void** self) {
    *self = (void*)0xba7ff0;
    if (*(void**)0x010add80 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_79ceb0 fn = *(vfn_79ceb0*)((char*)*(void**)cm + 0xa8);
        std::string s("IDebugRenderer");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IDebugRenderer_IDebugRenderer (0x79ceb0)
