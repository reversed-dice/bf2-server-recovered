// FUNCTION: BF2 0xa663b0
extern "C" void* fn_69de30(int);
extern "C" int g_0xc7d070;
extern "C" int target_a663b0(void* self)
{
    if (*(int*)((char*)self + 0x30) != 1) return 0;
    void* p = *(void**)((char*)self + 0x38);
    int c = *(int*)((char*)p + 8);
    int b = *(int*)((char*)p + 4);
    int a = *(int*)p;
    *(char*)((char*)self + 0x108) = 0;
    void* x = fn_69de30(g_0xc7d070);
    *(int*)((char*)x + 0x200) = a;
    int* dest = (int*)((char*)x + 0x200);
    dest[1] = b;
    dest[2] = c;
    return 0;
}
