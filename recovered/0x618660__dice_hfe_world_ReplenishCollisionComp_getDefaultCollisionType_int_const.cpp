// FUNCTION: BF2 0x618660
namespace dice { namespace hfe { namespace world {
bool getDefaultCollision_0x617470(void* self) {
    void* a = *(void**)((char*)self + 0x30);
    if (*(char*)((char*)a + 0x15) == 0)
        return false;
    void* g = *(void**)0x010c2800;
    void* r = ((void* (*)(void*))(*(void***)g)[0x9])(g);
    if (((unsigned char (*)(void*))(*(void***)r)[0x19])(r))
        return false;
    return true;
}
} } }
