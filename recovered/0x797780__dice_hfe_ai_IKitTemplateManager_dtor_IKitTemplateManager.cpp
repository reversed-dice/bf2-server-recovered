// FUNCTION: BF2 0x797780
#include <string>
namespace dice { namespace hfe {
extern void refresh_797780();
typedef void (*vfn_797780)(void*, std::string const&);
void dtor_797780(void** self) {
    *self = (void*)0xba7450;
    if ((void*)self == *(void**)0x010adde0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_797780 fn = *(vfn_797780*)((char*)*(void**)cm + 0xb0);
            std::string s("IKitTemplateManager");
            fn(*(void**)0x010b3798, s);
        }
        refresh_797780();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IKitTemplateManager_dtor_IKitTemplateManager (0x797780)
