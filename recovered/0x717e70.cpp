extern "C" int fn_7194e0(void*, int, int);
typedef int (*vfn1)(void*, int);

extern "C" unsigned char hasLod_717e70(void* self, int lod)
{
    if (*(char*)((char*)(*(void**)((char*)self + 0x18)) + 0x58)) {
        if (*(char*)((char*)self + 0x20) == 1) {
            ((vfn1)(*(void***)self)[0x68/8])(self, 0);
        }
        return fn_7194e0(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), lod);
    }
    return 0;
}
