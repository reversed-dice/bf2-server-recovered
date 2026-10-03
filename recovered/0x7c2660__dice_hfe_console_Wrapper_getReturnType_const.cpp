// FUNCTION: BF2 0x7c2660
extern "C" void* fn_7bb8d0(void* g, void* r);

extern "C" void* fn_7c2660(void* self)
{
    void* obj = *(void**)((char*)self + 8);
    void** vt = *(void***)obj;
    void* r = ((void* (*)(void*, int))vt[8])(obj, 0);
    void* r2 = fn_7bb8d0(*(void**)0x10aeb18, r);
    if (r2)
        return r2;
    void* obj2 = *(void**)((char*)self + 8);
    void** vt2 = *(void***)obj2;
    return ((void* (*)(void*, int))vt2[8])(obj2, 0);
}
