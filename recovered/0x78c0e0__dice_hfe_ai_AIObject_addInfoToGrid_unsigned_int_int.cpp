// FUNCTION: BF2 0x78c0e0
namespace dice { namespace hfe { namespace ai {
void addInfoToGrid_0x78c0e0(void* self, int a, int b) {
    if (!((bool (*)(void*))(*(void***)self)[0x3e])(self))
        return;
    void* s = *(void**)0x010ade50;
    void* fn = (*(void***)s)[0x2];
    bool r = ((bool (*)(void*))(*(void***)self)[0x1d])(self);
    ((void (*)(void*, int, bool, int))fn)(s, b, r, a);
}
} } }
