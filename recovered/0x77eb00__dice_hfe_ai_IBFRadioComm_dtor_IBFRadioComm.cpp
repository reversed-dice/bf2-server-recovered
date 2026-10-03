// FUNCTION: BF2 0x77eb00
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77eb00)(void*, std::string const&);
void dtor_77eb00(void** self) {
    *self = (void*)0xba2df0;
    if ((void*)self == *(void**)0x010adda0) {
        void* cm = *(void**)0x010b3798;
        vfn_77eb00 fn = *(vfn_77eb00*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFRadioComm");
        fn(*(void**)0x010b3798, s);
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFRadioComm_dtor_IBFRadioComm (0x77eb00)
