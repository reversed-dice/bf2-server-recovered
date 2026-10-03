// FUNCTION: BF2 0x797900
#include <string>
namespace dice { namespace hfe {
extern void post_797900();
typedef void (*vfn_797900)(void*, std::string const&);
void dtor_797900(void** self) {
    *self = (void*)0xba7450;
    if ((void*)self == *(void**)0x010adde0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_797900 fn = *(vfn_797900*)((char*)*(void**)cm + 0xb0);
            std::string s("IKitTemplateManager");
            fn(*(void**)0x010b3798, s);
        }
        post_797900();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IKitTemplateManager_dtor_IKitTemplateManager (0x797900)
