// FUNCTION: BF2 0x69a020
namespace dice { namespace hfe {
void updateFlagsRecursive_0x69a020(void* self, int a, int b) {
    ((void (*)(void*))(*(void***)self)[0x18])(self);
    void* it = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    while (it) {
        updateFlagsRecursive_0x69a020(it, a, b);
        it = *(void**)((char*)it + 0x58);
    }
}
} }
