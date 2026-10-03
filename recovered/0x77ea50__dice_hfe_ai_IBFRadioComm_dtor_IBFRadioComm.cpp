// FUNCTION: BF2 0x77ea50
#include <string>
namespace dice { namespace hfe {
typedef void (*vfn_77ea50)(void*, std::string const&);
void dtor_77ea50(void** self) {
    *self = (void*)0xba2df0;
    if ((void*)self == *(void**)0x010adda0) {
        void* cm = *(void**)0x010b3798;
        vfn_77ea50 fn = *(vfn_77ea50*)((char*)*(void**)cm + 0xb0);
        std::string s("IBFRadioComm");
        fn(*(void**)0x010b3798, s);
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFRadioComm_dtor_IBFRadioComm (0x77ea50)
