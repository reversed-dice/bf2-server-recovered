// FUNCTION: BF2 0xafebb0
#include <string>

// ConsoleClass143::~ConsoleClass143 (deleting variant, D0) -- 0xafebb0
//
// Same body as the D1 variant at 0xafeb40 plus the trailing operator delete:
// install this class's vtable, release the COW string at +0x110, let the
// inlined base destructor install its vtable, then free the object.

extern "C" void dtor_afebb0(char* self)
{
    *(void**)self = (void*)0xc91e10;
    ((std::string*)(self + 0x110))->~basic_string();
    *(void**)self = (void*)0xb980f0;
    operator delete((void*)self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass143_dtor_ConsoleClass143 (0xafebb0)
