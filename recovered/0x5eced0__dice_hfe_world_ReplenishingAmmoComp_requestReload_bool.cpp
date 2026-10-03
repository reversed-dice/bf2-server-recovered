// FUNCTION: BF2 0x5eced0
typedef unsigned char (*vfn1)(void*);
typedef unsigned char (*vfn2)(void*);

extern "C" unsigned char requestReload_5eced0(void* self, unsigned char param2)
{
    if (!(param2 != 0 && *(char*)((char*)*(void**)((char*)self + 0xb0) + 0x30) != 0)) {
        if (((vfn1)(*(void***)self)[0x190/8])(self) == 0) {
            return ((vfn2)(*(void***)self)[0x1d0/8])(self);
        }
    }
    return 0;
}
