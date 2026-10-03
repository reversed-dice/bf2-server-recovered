extern "C" int fn_71f350(void*, int, int, int);
typedef int (*vfn1)(void*, int);

extern "C" unsigned short getMaterialForVertex_717f90(void* self, int a, int b)
{
    if (*(char*)((char*)self + 0x20) == 1) {
        ((vfn1)(*(void***)self)[0x68/8])(self, 0);
    }
    return fn_71f350(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), a, b);
}
