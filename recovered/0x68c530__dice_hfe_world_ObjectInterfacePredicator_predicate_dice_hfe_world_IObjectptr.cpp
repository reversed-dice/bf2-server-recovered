// FUNCTION: BF2 0x68c530
namespace dice { namespace hfe { namespace world {
extern bool fn_68c4b0(void* a, void* b);
bool predicate_0x68c530(void* self, void* a) {
    void* p = ((void* (*)(void*, int))(*(void***)a)[0x3])(a, *(int*)((char*)self + 0x18));
    if (p)
        return fn_68c4b0(self, a);
    return false;
}
} } }
