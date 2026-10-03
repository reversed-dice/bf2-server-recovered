// FUNCTION: BF2 0x417320
// BF2_FLAGS: -fno-strict-aliasing
// Ghidra name: anonymous_namespace_write_raw_unsigned_charptrref_unsigned_short
// ASM: writes SI (unsigned short) to [RDI], then advances RDI by 2
// This is a serialization helper in an anonymous namespace
void write_raw_unsigned_short(unsigned char*& ptr, unsigned short value) {
    *(unsigned short*)ptr = value;
    ptr += 2;
}
