// FUNCTION: BF2 0x781070
#include <string>
namespace dice { namespace hfe {
extern void refresh_781070();
typedef void (*vfn_781070)(void*, std::string const&, void*);
void ctor_781070(void** self) {
    *self = (void*)0xba30d0;
    if (*(void**)0x010addb0 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_781070 fn = *(vfn_781070*)((char*)*(void**)cm + 0xa8);
            std::string s("IBFCommander");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_781070();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCommander_IBFCommander (0x781070)
