// FUNCTION: BF2 0x77de30
#include <string>
namespace dice { namespace hfe {
extern void refresh_77de30();
typedef void (*vfn_77de30)(void*, std::string const&, void*);
void ctor_77de30(void** self) {
    *self = (void*)0xba2970;
    if (*(void**)0x010ade28 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77de30 fn = *(vfn_77de30*)((char*)*(void**)cm + 0xa8);
            std::string s("IAIObjectEnvironment");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_77de30();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIObjectEnvironment_IAIObjectEnvironment (0x77de30)
