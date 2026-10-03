// FUNCTION: BF2 0x781440
#include <string>
namespace dice { namespace hfe {
extern void refresh_781440();
typedef void (*vfn_781440)(void*, std::string const&, void*);
void ctor_781440(void** self) {
    *self = (void*)0xba31d0;
    if (*(void**)0x010adda8 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_781440 fn = *(vfn_781440*)((char*)*(void**)cm + 0xa8);
            std::string s("IBFSquad");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_781440();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFSquad_IBFSquad (0x781440)
