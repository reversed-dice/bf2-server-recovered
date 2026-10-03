// FUNCTION: BF2 0x788fb0
namespace dice { namespace hfe { namespace ai {
bool getManDown_0x788fb0(void* self) {
    void* p = *(void**)((char*)self + 8);
    void* r = ((void* (*)(void*))(*(void***)p)[0x8])(p);
    void* c = *(void**)((char*)r + 0x78);
    if (c && ((int (*)(void*))(*(void***)c)[0x17])(c) == 1)
        return true;
    return false;
}
} } }
