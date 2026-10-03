// FUNCTION: BF2 0x77db30
#include <string>
namespace dice { namespace hfe {
extern void refresh_77db30();
typedef void (*vfn_77db30)(void*, std::string const&);
void dtor_77db30(void** self) {
    *self = (void*)0xba2970;
    if ((void*)self == *(void**)0x010ade28) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77db30 fn = *(vfn_77db30*)((char*)*(void**)cm + 0xb0);
            std::string s("IAIObjectEnvironment");
            fn(*(void**)0x010b3798, s);
        }
        refresh_77db30();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIObjectEnvironment_dtor_IAIObjectEnvironment (0x77db30)
