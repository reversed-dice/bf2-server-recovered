// FUNCTION: BF2 0x76c4e0
namespace dice { namespace hfe { namespace ai {
bool isClimbingLadder_0x76c4a0(void* self) {
    void* p = *(void**)((char*)self + 8);
    void* r = ((void* (*)(void*))(*(void***)p)[0x12])(p);
    if (!r)
        return false;
    void* c = *(void**)((char*)r + 0x28);
    return ((int (*)(void*))(*(void***)c)[0x4])(c) == *(int*)0x00c7ce10;
}
} } }
