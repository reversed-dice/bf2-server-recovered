// FUNCTION: BF2 0x78ed40
namespace dice { namespace hfe { namespace ai {
unsigned char getObjectSpawnerHolding_0x78ed40(void* self) {
    void* it = *(void**)((char*)self + 0x20);
    while (it) {
        void* r = ((void* (*)(void*, int))(*(void***)it)[0x3])(it, *(int*)0x00c7ce6c);
        if (r)
            return ((unsigned char (*)(void*))(*(void***)r)[0x31])(r);
        it = *(void**)((char*)it + 0x50);
    }
    return 0;
}
} } }
