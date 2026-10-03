// FUNCTION: BF2 0x77e850
#include <string>
namespace dice { namespace hfe {
extern void refresh_77e850();
typedef void (*vfn_77e850)(void*, std::string const&, void*);
void ctor_77e850(void** self) {
    *self = (void*)0xba2cd0;
    if (*(void**)0x010adde8 == 0) {
        {
            void* cm = *(void**)0x010b3798;
            vfn_77e850 fn = *(vfn_77e850*)((char*)*(void**)cm + 0xa8);
            std::string s("IBFCollisionHandler");
            fn(*(void**)0x010b3798, s, (void*)self);
        }
        refresh_77e850();
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_IBFCollisionHandler_IBFCollisionHandler (0x77e850)
