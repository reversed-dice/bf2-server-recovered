// FUNCTION: BF2 0x7979b0
#include <string>
namespace dice { namespace hfe {
extern void refresh_7979b0();
typedef void (*vfn_7979b0)(void*, std::string const&, void*);
void ctor_7979b0(void** self) {
    *self = (void*)0xba7450;
    if (*(void**)0x010adde0 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_7979b0 fn = *(vfn_7979b0*)((char*)*(void**)cm + 0xa8);
            std::string s("IKitTemplateManager");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_7979b0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IKitTemplateManager_IKitTemplateManager (0x7979b0)
