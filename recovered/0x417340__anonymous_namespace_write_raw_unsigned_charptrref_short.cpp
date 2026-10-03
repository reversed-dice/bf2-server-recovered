// FUNCTION: BF2 0x417340
// BF2_FLAGS: -fno-strict-aliasing
// Ghidra name: anonymous_namespace_write_raw_unsigned_charptrref_short
void write_raw_short(unsigned char*& ptr, short value) {
    *(short*)ptr = value;
    ptr += 2;
}
