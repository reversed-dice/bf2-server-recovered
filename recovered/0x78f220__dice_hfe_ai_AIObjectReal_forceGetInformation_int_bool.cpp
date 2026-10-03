// FUNCTION: BF2 0x78f220
typedef long (*vfn1)(void*, unsigned int);
typedef void (*vfn2)(void*, int, unsigned char);

extern "C" void* g_courier_78f220;

extern "C" int forceGetInformation_78f220(void* self, int param2, unsigned char param3)
{
    void* c = g_courier_78f220;
    int v = *(int*)((char*)self + (long)param2 * 4 + 100);
    if (((vfn1)(*(void***)c)[0x10/8])(c, v) == 0) {
        ((vfn2)(*(void***)self)[0x158/8])(self, param2, param3);
    }
    return *(int*)((char*)self + (long)param2 * 4 + 100);
}
