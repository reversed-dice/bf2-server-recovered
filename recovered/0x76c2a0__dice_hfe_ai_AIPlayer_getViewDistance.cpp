// FUNCTION: BF2 0x76c2a0
namespace dice { namespace hfe { namespace ai {
float getViewDistance_0x76c2a0(void* self) {
    void* a = ((void* (*)(void*))(*(void***)self)[0x3])(self);
    if (((unsigned char (*)(void*))(*(void***)a)[0xbf])(a)) {
        float base = *(float*)((char*)self + 0x14);
        float mult = *(float*)0x00b34b58;
        return mult * base;
    }
    return *(float*)((char*)self + 0x14);
}
} } }
