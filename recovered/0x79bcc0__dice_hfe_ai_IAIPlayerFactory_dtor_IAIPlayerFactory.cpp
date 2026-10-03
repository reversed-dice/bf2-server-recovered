// FUNCTION: BF2 0x79bcc0
#include <string>
namespace dice { namespace hfe {
extern void refresh_79bcc0();
typedef void (*vfn_79bcc0)(void*, std::string const&);
void dtor_79bcc0(void** self) {
    *self = (void*)0xba7c90;
    if ((void*)self == *(void**)0x010addd8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_79bcc0 fn = *(vfn_79bcc0*)((char*)*(void**)cm + 0xb0);
            std::string s("IAIPlayerFactory");
            fn(*(void**)0x010b3798, s);
        }
        refresh_79bcc0();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIPlayerFactory_dtor_IAIPlayerFactory (0x79bcc0)
