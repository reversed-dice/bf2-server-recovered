// FUNCTION: BF2 0x780ef0
#include <string>
namespace dice { namespace hfe {
extern void post_780ef0();
typedef void (*vfn_780ef0)(void*, std::string const&);
void dtor_780ef0(void** self) {
    *self = (void*)0xba30d0;
    if ((void*)self == *(void**)0x010addb0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_780ef0 fn = *(vfn_780ef0*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFCommander");
            fn(*(void**)0x010b3798, s);
        }
        post_780ef0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCommander_dtor_IBFCommander (0x780ef0)
