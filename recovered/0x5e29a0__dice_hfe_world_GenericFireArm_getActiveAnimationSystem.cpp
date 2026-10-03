// FUNCTION: BF2 0x5e29a0
extern "C" void* fn_5e29a0(void* self)
{
    if (*(void**)((char*)self + 0x2e0) && *(void**)((char*)self + 0x2d0) != *(void**)((char*)self + 0x2f0)) {
        void* obj = *(void**)((char*)self + 0x2d8);
        void** vt = *(void***)obj;
        void* r = ((void* (*)(void*, int))vt[3])(obj, *(int*)0xc7d0e0);
        void** vt2 = *(void***)r;
        return ((void* (*)(void*))vt2[7])(r);
    }
    return *(void**)((char*)self + (long)*(int*)((char*)self + 0x258) * 8 + 0x248);
}
