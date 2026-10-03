// FUNCTION: BF2 0x6294c0
extern "C" int fn_6294c0(void* self)
{
    void* obj = *(void**)((char*)self + 0x18);
    void* q = *(void**)((char*)obj + 0x70);
    if (!q)
        return -1;
    void** vt = *(void***)q;
    if (((int (*)(void*))vt[0x1d])(q))
        return -1;
    void** vt2 = *(void***)q;
    return ((int (*)(void*))vt2[0x20])(q);
}
