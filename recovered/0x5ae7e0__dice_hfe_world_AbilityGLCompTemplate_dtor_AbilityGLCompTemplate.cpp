// FUNCTION: BF2 0x5ae7e0
#include <string>

// Two vtable pointers at +0x0 and +0x8, then two std::string members that
// the destructor releases in reverse declaration order.
extern "C" void dtor_5ae7e0(char* self)
{
    *(void**)(self + 0x0) = (void*)0xb668d0;
    *(void**)(self + 0x8) = (void*)0xb66990;
    ((std::string*)(self + 0x28))->~basic_string();
    ((std::string*)(self + 0x20))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_dtor_AbilityGLCompTemplate (0x5ae7e0)
