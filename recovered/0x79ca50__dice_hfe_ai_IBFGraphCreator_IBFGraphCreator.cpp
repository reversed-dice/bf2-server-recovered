// FUNCTION: BF2 0x79ca50
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_79ca50)(void*, std::string const&, void*);
void ctor_79ca50(void** self) {
    *self = (void*)0xba7f90;
    if (*(void**)0x010add98 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_79ca50 fn = *(vfn_79ca50*)((char*)*(void**)cm + 0xa8);
        std::string s("IBFGraphCreator");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFGraphCreator_IBFGraphCreator (0x79ca50)
