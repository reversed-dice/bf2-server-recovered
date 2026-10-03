// FUNCTION: BF2 0x74b490
extern "C" void* real_0x407728(void* p1, int one, void* p2, void* p3);
extern "C" void* fwrite_file_func(void* a1, void* a2, void* a3, void* a4) {
    return real_0x407728(a3, 1, a4, a2);
}
// REVERSED_FUNCTION: fwrite_file_func (0x74b490)
