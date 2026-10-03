// FUNCTION: BF2 0x417330
// BF2_FLAGS: -fno-strict-aliasing
// Ghidra name: anonymous_namespace_read_raw_unsigned_char_constptrref_unsigned_shortptr
void read_raw_unsigned_short(unsigned char const*& ptr, unsigned short* dest) {
    *dest = *(unsigned short*)ptr;
    ptr += 2;
}
