// FUNCTION: BF2 0x49a210
// 0x49a210 - Player_getDefaultVehicle
extern "C" void fn_004085b8(void* p);

long fn_0x49a210(void* self) {
    void* ptr = *(void**)((char*)self + 0xe8);
    long obj = 0;
    if (__builtin_expect(ptr != 0, 1)) {
        obj = *(long*)((char*)ptr + 0x8);
        if (__builtin_expect(obj != 0, 1)) {
            if (__builtin_expect((*(unsigned char*)(obj + 0x8) & 0x20) != 0, 0)) {
                int* ref = (int*)ptr;
                int count = *ref - 1;
                *ref = count;
                if (count == 0) {
                    fn_004085b8(ptr);
                }
                *(void**)((char*)self + 0xe8) = 0;
                return 0;
            }
        }
    }
    return obj;
}
