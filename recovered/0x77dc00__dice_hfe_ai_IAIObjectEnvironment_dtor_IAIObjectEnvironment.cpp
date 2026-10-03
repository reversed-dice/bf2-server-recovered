// FUNCTION: BF2 0x77dc00
#include <string>
namespace dice { namespace hfe {
extern void post_77dc00();
typedef void (*vfn_77dc00)(void*, std::string const&);
void dtor_77dc00(void** self) {
    *self = (void*)0xba2970;
    if ((void*)self == *(void**)0x010ade28) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77dc00 fn = *(vfn_77dc00*)((char*)*(void**)cm + 0xb0);
            std::string s("IAIObjectEnvironment");
            fn(*(void**)0x010b3798, s);
        }
        post_77dc00();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIObjectEnvironment_dtor_IAIObjectEnvironment (0x77dc00)
