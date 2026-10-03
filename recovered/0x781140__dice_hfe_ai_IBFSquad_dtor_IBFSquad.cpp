// FUNCTION: BF2 0x781140
#include <string>
namespace dice { namespace hfe {
extern void refresh_781140();
typedef void (*vfn_781140)(void*, std::string const&);
void dtor_781140(void** self) {
    *self = (void*)0xba31d0;
    if ((void*)self == *(void**)0x010adda8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_781140 fn = *(vfn_781140*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFSquad");
            fn(*(void**)0x010b3798, s);
        }
        refresh_781140();
    }
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFSquad_dtor_IBFSquad (0x781140)
