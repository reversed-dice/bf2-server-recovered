// FUNCTION: BF2 0x781210
#include <string>
namespace dice { namespace hfe {
extern void post_781210();
typedef void (*vfn_781210)(void*, std::string const&);
void dtor_781210(void** self) {
    *self = (void*)0xba31d0;
    if ((void*)self == *(void**)0x010adda8) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_781210 fn = *(vfn_781210*)((char*)*(void**)cm + 0xb0);
            std::string s("IBFSquad");
            fn(*(void**)0x010b3798, s);
        }
        post_781210();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFSquad_dtor_IBFSquad (0x781210)
