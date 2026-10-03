// FUNCTION: BF2 0x8226e0
extern "C" void swap_byte(char* a, char* b) {
    char t1 = *a, t2 = *b;
    *a = t2;
    *b = t1;
}
// REVERSED_FUNCTION: swap_byte (0x8226e0)
