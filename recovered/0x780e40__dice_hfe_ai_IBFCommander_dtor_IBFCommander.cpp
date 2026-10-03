// FUNCTION: BF2 0x780e40
#include <string>
namespace dice { namespace hfe {
extern void post_780e40();
typedef void (*vfn_780e40)(void*, std::string const&);
void dtor_780e40(void** self) {
    *self = (void*)0xba30d0;
    if ((void*)self == *(void**)0x010addb0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_780e40 fn = *(vfn_780e40*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFCommander");
            fn(*(void**)0x010b3798, s);
        }
        post_780e40();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCommander_dtor_IBFCommander (0x780e40)
