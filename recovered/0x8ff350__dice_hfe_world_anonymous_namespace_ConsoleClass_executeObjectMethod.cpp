// FUNCTION: BF2 0x8ff350
typedef void* (*vfn3)(void*, int*, int*);
extern "C" void* fn_69de30(int);
extern "C" int g_0xc7ce78;
extern "C" int target_8ff350(void* self)
{
    if (*(int*)((char*)self + 0x30) != 2) return 0;
    void* p = *(void**)((char*)self + 0x38);
    int a3 = *(int*)((char*)p + 8);
    int a2 = *(int*)((char*)p + 4);
    int a1 = *(int*)p;
    int tmp2[3];
    tmp2[0] = a1;
    tmp2[1] = a2;
    tmp2[2] = a3;
    void* q = *(void**)((char*)self + 0x40);
    int b3 = *(int*)((char*)q + 8);
    int b2 = *(int*)((char*)q + 4);
    int b1 = *(int*)q;
    int tmp1[3];
    tmp1[0] = b1;
    tmp1[1] = b2;
    tmp1[2] = b3;
    *(char*)((char*)self + 0x108) = 0;
    void* x = fn_69de30(g_0xc7ce78);
    ((vfn3*)*(void***)x)[0x2e0/8](x, tmp2, tmp1);
    return 0;
}
