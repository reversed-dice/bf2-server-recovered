// FUNCTION: BF2 0x611080
typedef void (*vfn1)(void*);
typedef void (*vfn2)(void*, void*);

extern "C" void* g_nametag_611080;

extern "C" void postInit_611080(void* self)
{
    void* lv;
    void* a = *(void**)((char*)self + 0x2b0);
    if (a == 0 || *(void**)((char*)a + 8) == 0) {
        lv = *(void**)((char*)self + 0x258);
    } else {
        lv = *(void**)((char*)self + 0x258);
        if (*(unsigned char*)((char*)lv + 0x293) != 0) {
            ((vfn1)(*(void***)self)[0x330/8])(self);
            lv = *(void**)((char*)self + 0x258);
        }
    }
    if (*(unsigned char*)((char*)lv + 0x296) != 0 && g_nametag_611080) {
        ((vfn2)(*(void***)g_nametag_611080)[0x48/8])(g_nametag_611080, self);
    }
}
