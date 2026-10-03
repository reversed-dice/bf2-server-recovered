// FUNCTION: BF2 0x879010
namespace dice { namespace hfe { namespace anonymous_namespace {
void* executeObj_0x879010(void* self) {
    if (*(int*)((char*)self + 0x30) != 0)
        return 0;
    *(char*)((char*)self + 0x108) = 0;
    void* c = *(void**)0x010b8c08;
    if (!c || !((unsigned char (*)(void*))(*(void***)c)[0x4f])(c))
        c = 0;
    ((void (*)(void*))(*(void***)c)[0x9])(c);
    return 0;
}
} } }
