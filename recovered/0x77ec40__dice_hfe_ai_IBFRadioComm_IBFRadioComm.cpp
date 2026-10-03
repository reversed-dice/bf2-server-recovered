// FUNCTION: BF2 0x77ec40
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77ec40)(void*, std::string const&, void*);
void ctor_77ec40(void** self) {
    *self = (void*)0xba2df0;
    if (*(void**)0x010adda0 == 0) {
        void* cm = *(void**)0x010b3798;
        vfn_77ec40 fn = *(vfn_77ec40*)((char*)*(void**)cm + 0xa8);
        std::string s("IBFRadioComm");
        fn(*(void**)0x010b3798, s, (void*)self);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFRadioComm_IBFRadioComm (0x77ec40)
