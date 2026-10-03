// FUNCTION: BF2 0x79bfc0
#include <string>
namespace dice { namespace hfe {
extern void refresh_79bfc0();
typedef void (*vfn_79bfc0)(void*, std::string const&, void*);
void ctor_79bfc0(void** self) {
    *self = (void*)0xba7c90;
    if (*(void**)0x010addd8 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_79bfc0 fn = *(vfn_79bfc0*)((char*)*(void**)cm + 0xa8);
            std::string s("IAIPlayerFactory");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_79bfc0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPlayerFactory_IAIPlayerFactory (0x79bfc0)
