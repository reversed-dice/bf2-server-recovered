// FUNCTION: BF2 0x77e620
#include <string>
namespace dice { namespace hfe {
extern void refresh_77e620();
typedef void (*vfn_77e620)(void*, std::string const&);
void dtor_77e620(void** self) {
    *self = (void*)0xba2cd0;
    if ((void*)self == *(void**)0x010adde8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e620 fn = *(vfn_77e620*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFCollisionHandler");
            fn(*(void**)0x010b3798, s);
        }
        refresh_77e620();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCollisionHandler_dtor_IBFCollisionHandler (0x77e620)
