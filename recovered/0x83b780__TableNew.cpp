// FUNCTION: BF2 0x83b780
extern "C" void* real_0x83b5e0(void* a, void* b, int four, void* c, void* d, void* e);
extern "C" void* TableNew(void* a, void* b, void* c, void* d, void* e) {
    return real_0x83b5e0(a, b, 4, c, d, e);
}
// REVERSED_FUNCTION: TableNew (0x83b780)
