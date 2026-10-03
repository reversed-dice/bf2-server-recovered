// FUNCTION: BF2 0x9d7020
extern "C" unsigned char g_0108fad4;
extern "C" int* target_9d7020(void* self)
{
    if (__builtin_expect(*(int*)((char*)self + 0x30) == 0, 1)) {
        *(char*)((char*)self + 0x108) = 1;
        unsigned char v = g_0108fad4;
        *(char*)((char*)self + 0x10a) = v ^ 1;
        return (int*)((char*)self + 0x10a);
    } else {
        if (*(int*)((char*)self + 0x30) == 1) {
            void* p = *(void**)((char*)self + 0x38);
            unsigned char v = *(unsigned char*)p;
            *(char*)((char*)self + 0x108) = 0;
            g_0108fad4 = v ^ 1;
            return 0;
        }
        return 0;
    }
}
