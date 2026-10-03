extern "C" void* g;
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, int);
extern "C" void* fn_487790(void*, int*);
typedef int (*vfn3)(void*);

extern "C" int getOwnerOfControlPoint_7702b0(void* self, unsigned int id)
{
    void* r = ((vfn1)(*(void***)g)[0x2e8/8])(g);
    void* o = fn_487790(r, (int*)&id);
    return ((vfn3)(*(void***)(*(void**)((char*)o + 0x28)))[0x340/8])(*(void**)((char*)o + 0x28));
}
