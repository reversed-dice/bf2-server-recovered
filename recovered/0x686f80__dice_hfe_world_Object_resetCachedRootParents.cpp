// FUNCTION: BF2 0x686f80
namespace dice { namespace hfe { namespace world {
void resetCachedRootParents_0x686f80(void* self) {
    void* p = *(void**)((char*)self + 0x58);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x3f])(p);
    if (*(void**)((char*)self + 0x18)) {
        void* q = *(void**)((char*)self + 0x60);
        *(void**)((char*)self + 0x18) = 0;
        if (q)
            ((void (*)(void*))(*(void***)q)[0x3f])(q);
    }
}
} } }
