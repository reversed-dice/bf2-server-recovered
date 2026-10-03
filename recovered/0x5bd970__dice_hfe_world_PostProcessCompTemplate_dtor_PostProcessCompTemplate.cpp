// FUNCTION: BF2 0x5bd970
#include <string>

// Two vtable pointers at +0x0 and +0x8, then two std::string members that
// the destructor releases in reverse declaration order.
extern "C" void dtor_5bd970(char* self)
{
    *(void**)(self + 0x0) = (void*)0xb69730;
    *(void**)(self + 0x8) = (void*)0xb697f0;
    ((std::string*)(self + 0x20))->~basic_string();
    ((std::string*)(self + 0x18))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_dtor_PostProcessCompTemplate (0x5bd970)
