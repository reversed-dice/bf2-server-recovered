// FUNCTION: BF2 0x642600
#include <string>

// dice::hfe::world::WindAffectorTemplate::~WindAffectorTemplate (deleting) -- 0x642600
//
// Two vtable pointers (the class has a secondary vtable at +8), the COW string
// at +0x20, then operator delete.

extern "C" void dtor_642600(char* self)
{
    *(void**)self = (void*)0xb87c10;
    *(void**)(self + 8) = (void*)0xb87d08;
    ((std::string*)(self + 0x20))->~basic_string();
    operator delete((void*)self);
}
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_dtor_WindAffectorTemplate (0x642600)
