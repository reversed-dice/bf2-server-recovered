// FUNCTION: BF2 0x434e70
extern "C" void* g_112ee38;
typedef void* (*vfn40)(void*, int);
extern "C" int executeClient_434e70(void* self)
{
    void* p = ((vfn40)(*(void***)g_112ee38)[0x40/8])(g_112ee38, *(unsigned char*)((char*)self + 0x12));
    void* c = ((vfn40)(*(void***)g_112ee38)[0x40/8])(g_112ee38, *(unsigned char*)((char*)self + 0x13));
    if (p == 0 || c == 0) {
        return 0;
    }
    return 1;
}
