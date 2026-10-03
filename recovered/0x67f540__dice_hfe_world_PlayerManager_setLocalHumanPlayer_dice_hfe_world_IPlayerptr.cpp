// FUNCTION: BF2 0x67f540
namespace dice { namespace hfe { namespace world {
void* setLocalHumanPlayer_0x67f540(void* self, void* p) {
    if (p)
        ((void (*)(void*))(*(void***)p)[0xce])(p);
    *(void**)((char*)self + 0xf0) = p;
    return p;
}
} } }
