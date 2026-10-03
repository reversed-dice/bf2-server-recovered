// FUNCTION: BF2 0x599370
namespace dice { namespace hfe { namespace world {
void handleVisualUpdate_0x599370(void* self, float dt) {
    void* p = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x2e])(p);
    *(int*)((char*)self + 0x258) = 0;
}
} } }
