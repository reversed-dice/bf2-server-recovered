// FUNCTION: BF2 0xad9f80
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void* getActiveValueHolder();
extern "C" float fabsf(float);

extern "C" void* eom(void* self) {
    if (*(int*)((char*)self + 0x30) != 3) {
        return 0;
    }
    int a = *(int*)*(void**)((char*)self + 0x38);
    float b = *(float*)*(void**)((char*)self + 0x40);
    int c = *(int*)*(void**)((char*)self + 0x48);
    *(char*)((char*)self + 0x108) = 0;
    void* h = getActiveValueHolder();
    *(int*)((char*)h + 0x0) = a;
    *(float*)((char*)h + 0x8) = fabsf(b);
    *(int*)((char*)h + 0x4) = c;
    return 0;
}
