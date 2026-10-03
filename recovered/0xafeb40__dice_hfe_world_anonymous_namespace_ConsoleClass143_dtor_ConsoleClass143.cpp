// FUNCTION: BF2 0xafeb40
#include <string>

// ConsoleClass143::~ConsoleClass143 -- 0xafeb40
//
// Derived destructor: install this class's vtable, release the COW string at
// +0x110, then let the inlined base destructor install its own vtable.

extern "C" void dtor_afeb40(char* self)
{
    *(void**)self = (void*)0xc91e10;
    ((std::string*)(self + 0x110))->~basic_string();
    *(void**)self = (void*)0xb980f0;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass143_dtor_ConsoleClass143 (0xafeb40)
