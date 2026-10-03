// FUNCTION: BF2 0x780fa0
#include <string>
namespace dice { namespace hfe {
extern void refresh_780fa0();
typedef void (*vfn_780fa0)(void*, std::string const&, void*);
void ctor_780fa0(void** self) {
    *self = (void*)0xba30d0;
    if (*(void**)0x010addb0 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_780fa0 fn = *(vfn_780fa0*)((char*)*(void**)cm + 0xa8);
            std::string s("IBFCommander");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_780fa0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCommander_IBFCommander (0x780fa0)
