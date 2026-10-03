// FUNCTION: BF2 0x8d1aa0
extern "C" int g_0108eda8;
extern "C" int* target_8d1aa0(void* self)
{
    if (__builtin_expect(*(int*)((char*)self + 0x30) == 0, 1)) {
        *(char*)((char*)self + 0x108) = 1;
        int v = g_0108eda8;
        *(int*)((char*)self + 0x10c) = v;
        return (int*)((char*)self + 0x10c);
    } else {
        if (*(int*)((char*)self + 0x30) == 1) {
            void* p = *(void**)((char*)self + 0x38);
            int v = *(int*)p;
            *(char*)((char*)self + 0x108) = 0;
            g_0108eda8 = v;
            return 0;
        }
        return 0;
    }
}
