// FUNCTION: BF2 0x77dcb0
#include <string>
namespace dice { namespace hfe {
extern void post_77dcb0();
typedef void (*vfn_77dcb0)(void*, std::string const&);
void dtor_77dcb0(void** self) {
    *self = (void*)0xba2970;
    if ((void*)self == *(void**)0x010ade28) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77dcb0 fn = *(vfn_77dcb0*)((char*)*(void**)cm + 0xb0);
            std::string s("IAIObjectEnvironment");
            fn(*(void**)0x010b3798, s);
        }
        post_77dcb0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIObjectEnvironment_dtor_IAIObjectEnvironment (0x77dcb0)
