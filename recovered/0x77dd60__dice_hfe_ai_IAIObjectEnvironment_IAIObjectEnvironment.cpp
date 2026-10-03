// FUNCTION: BF2 0x77dd60
#include <string>
namespace dice { namespace hfe {
extern void refresh_77dd60();
typedef void (*vfn_77dd60)(void*, std::string const&, void*);
void ctor_77dd60(void** self) {
    *self = (void*)0xba2970;
    if (*(void**)0x010ade28 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77dd60 fn = *(vfn_77dd60*)((char*)*(void**)cm + 0xa8);
            std::string s("IAIObjectEnvironment");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_77dd60();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IAIObjectEnvironment_IAIObjectEnvironment (0x77dd60)
