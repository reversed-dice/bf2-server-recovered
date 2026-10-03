// FUNCTION: BF2 0x816ea0
extern void fn_407ee8(void*, void*, int, void*) __attribute__((noreturn));
void ghiCallProgressCallback_0x816ea0(void* self, void* a2, int a3) {
    if (!self)
        fn_407ee8((void*)0xbb30d3, (void*)0xbb3198, 0x4c, (void*)0xbb3160);
    void* fn = *(void**)((char*)self + 0x60);
    if (!fn)
        return;
    ((void(*)(int, int, void*, int, int, int, void*))fn)(
        *(int*)((char*)self + 0x4),
        *(int*)((char*)self + 0x10),
        a2,
        a3,
        *(int*)((char*)self + 0x18c),
        *(int*)((char*)self + 0x190),
        *(void**)((char*)self + 0x70));
}
