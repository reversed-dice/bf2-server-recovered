// FUNCTION: BF2 0x686690
namespace dice { namespace hfe { namespace world {
bool hasCollisionLod_0x686690(void* self, int v) {
    void* c = *(void**)((char*)self + 0x80);
    if (c && ((unsigned char (*)(void*))(*(void***)c)[0xb])(c))
        return true;
    return false;
}
} } }
