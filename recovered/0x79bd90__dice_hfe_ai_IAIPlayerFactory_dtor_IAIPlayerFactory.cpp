// FUNCTION: BF2 0x79bd90
#include <string>
namespace dice { namespace hfe {
extern void post_79bd90();
typedef void (*vfn_79bd90)(void*, std::string const&);
void dtor_79bd90(void** self) {
    *self = (void*)0xba7c90;
    if ((void*)self == *(void**)0x010addd8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_79bd90 fn = *(vfn_79bd90*)((char*)*(void**)cm + 0xb0);
            std::string s("IAIPlayerFactory");
            fn(*(void**)0x010b3798, s);
        }
        post_79bd90();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPlayerFactory_dtor_IAIPlayerFactory (0x79bd90)
