// FUNCTION: BF2 0x7812c0
#include <string>
namespace dice { namespace hfe {
extern void post_7812c0();
typedef void (*vfn_7812c0)(void*, std::string const&);
void dtor_7812c0(void** self) {
    *self = (void*)0xba31d0;
    if ((void*)self == *(void**)0x010adda8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_7812c0 fn = *(vfn_7812c0*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFSquad");
            fn(*(void**)0x010b3798, s);
        }
        post_7812c0();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFSquad_dtor_IBFSquad (0x7812c0)
