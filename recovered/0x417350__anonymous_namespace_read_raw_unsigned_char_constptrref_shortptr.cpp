// FUNCTION: BF2 0x417350
// BF2_FLAGS: -fno-strict-aliasing
// Ghidra name: anonymous_namespace_read_raw_unsigned_char_constptrref_shortptr
void read_raw_short(unsigned char const*& ptr, short* dest) {
    *dest = *(short*)ptr;
    ptr += 2;
}
