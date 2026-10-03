// FUNCTION: BF2 0x560f80
namespace dice { namespace hfe { namespace world {
bool isValid_0x560f80(void* self) {
    if (((long)*(void**)((char*)self + 0x258) - (long)*(void**)((char*)self + 0x250)) >> 3 == 0)
        return false;
    void* c = *(void**)0x010b8c08;
    if (((unsigned char (*)(void*))(*(void***)c)[0x4f])(c))
        return true;
    if (*(char*)((char*)self + 0x268) != 0)
        return false;
    return true;
}
} } }
