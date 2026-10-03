// FUNCTION: BF2 0x79bef0
#include <string>
namespace dice { namespace hfe {
extern void refresh_79bef0();
typedef void (*vfn_79bef0)(void*, std::string const&, void*);
void ctor_79bef0(void** self) {
    *self = (void*)0xba7c90;
    if (*(void**)0x010addd8 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_79bef0 fn = *(vfn_79bef0*)((char*)*(void**)cm + 0xa8);
            std::string s("IAIPlayerFactory");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_79bef0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPlayerFactory_IAIPlayerFactory (0x79bef0)
