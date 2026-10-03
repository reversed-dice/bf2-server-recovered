// FUNCTION: BF2 0x8d7150
extern "C" void* fn_699ee0(int, int);
extern "C" void fn_5ffec0(void*, float);
extern "C" int g_0xc75e34;
extern "C" int g_0xc7d000;
extern "C" int* target_8d7150(void* self)
{
    if (__builtin_expect(*(int*)((char*)self + 0x30) == 0, 1)) {
        *(char*)((char*)self + 0x108) = 1;
        void* t = fn_699ee0(g_0xc75e34, g_0xc7d000);
        *(int*)((char*)self + 0x10c) = *(int*)((char*)t + 0xa0);
        return (int*)((char*)self + 0x10c);
    } else {
        if (*(int*)((char*)self + 0x30) == 1) {
            int cidv = g_0xc7d000;
            int u = *(int*)(*(void**)((char*)self + 0x38));
            float f;
            *(int*)&f = u;
            *(char*)((char*)self + 0x108) = 0;
            void* t2 = fn_699ee0(g_0xc75e34, cidv);
            fn_5ffec0(t2, f);
            return 0;
        }
        return 0;
    }
}
