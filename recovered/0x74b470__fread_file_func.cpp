// FUNCTION: BF2 0x74b470
extern "C" void* real_0x407948(void* p1, int one, void* p2, void* p3);
extern "C" void* fread_file_func(void* a1, void* a2, void* a3, void* a4) {
    return real_0x407948(a3, 1, a4, a2);
}
// REVERSED_FUNCTION: fread_file_func (0x74b470)
