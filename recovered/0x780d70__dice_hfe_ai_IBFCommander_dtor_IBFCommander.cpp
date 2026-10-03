// FUNCTION: BF2 0x780d70
#include <string>
namespace dice { namespace hfe {
extern void refresh_780d70();
typedef void (*vfn_780d70)(void*, std::string const&);
void dtor_780d70(void** self) {
    *self = (void*)0xba30d0;
    if ((void*)self == *(void**)0x010addb0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_780d70 fn = *(vfn_780d70*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFCommander");
            fn(*(void**)0x010b3798, s);
        }
        refresh_780d70();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCommander_dtor_IBFCommander (0x780d70)
