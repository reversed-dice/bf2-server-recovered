// FUNCTION: BF2 0xaa7050
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
void* executeObj_0xaa7050(void* self) {
    if (*(int*)((char*)self + 0x30) != 0)
        return 0;
    *(char*)((char*)self + 0x108) = 1;
    void* g = *(void**)0x0112ee48;
    void* r = ((void* (*)(void*))(*(void***)g)[0x24])(g);
    int v = ((int (*)(void*))(*(void***)r)[0x50])(r);
    *(int*)((char*)self + 0x10c) = v;
    return (char*)self + 0x10c;
}
} } } }
