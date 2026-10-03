// FUNCTION: BF2 0x79ce00
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79ce00)(void*, std::string const&, void*);
void ctor_79ce00(void** self) {
    *self = (void*)0xba7ff0;
    if (*(void**)0x010add80 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_79ce00 fn = *(vfn_79ce00*)((char*)*(void**)cm + 0xa8);
        std::string s("IDebugRenderer");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IDebugRenderer_IDebugRenderer (0x79ce00)
