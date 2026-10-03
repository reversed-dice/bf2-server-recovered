// FUNCTION: BF2 0x797a80
#include <string>
namespace dice { namespace hfe {
extern void refresh_797a80();
typedef void (*vfn_797a80)(void*, std::string const&, void*);
void ctor_797a80(void** self) {
    *self = (void*)0xba7450;
    if (*(void**)0x010adde0 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_797a80 fn = *(vfn_797a80*)((char*)*(void**)cm + 0xa8);
            std::string s("IKitTemplateManager");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_797a80();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IKitTemplateManager_IKitTemplateManager (0x797a80)
