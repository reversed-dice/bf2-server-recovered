// FUNCTION: BF2 0x74b570
namespace dice {
int cb_74b570(void* self) {
    unsigned int w = *(unsigned short*)((char*)self + 0x10);
    unsigned int a = w | 2;
    return (int)((a * (a ^ 1)) >> 8) & 0xff;
}
}
// REVERSED_FUNCTION: decrypt_byte (0x74b570)
