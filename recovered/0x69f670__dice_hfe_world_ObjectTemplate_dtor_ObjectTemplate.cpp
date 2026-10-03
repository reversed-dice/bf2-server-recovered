// FUNCTION: BF2 0x69f670
// Reversed at ::0x00751bd0
#include <cstdint>

namespace dice { namespace hfe {

// Represent object layout written by constructor.
// Offsets:
// 0x00: vptr
// 0x08: reserved/padding
// 0x10: m_name   <- param_2
// 0x18: m_value  <- param_3
struct ConsoleObjectBaseImpl {
    void*    vptr;      // 0x00
    uint64_t _reserved; // 0x08
    const char* m_name; // 0x10
    const char* m_value;// 0x18
};

}} // namespace dice::hfe

// C linkage wrapper name follows existing pattern used in binary.
// Matches decompiled behavior exactly: set vptr, store two pointers.
extern "C" void dice_hfe_ConsoleObjectBaseImpl_ConsoleObjectBaseImpl_char_constptr_char_constptr(
    dice::hfe::ConsoleObjectBaseImpl* obj,
    const char* name,
    const char* value)
{
    // set vtable pointer to the hardcoded address observed in binary
    obj->vptr = reinterpret_cast<void*>(0xb97fd0);
    // store constructor arguments into members at offsets 0x10 and 0x18
    obj->m_name  = name;
    obj->m_value = value;
}