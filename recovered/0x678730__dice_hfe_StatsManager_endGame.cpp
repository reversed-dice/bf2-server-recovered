// FUNCTION: BF2 0x678730
namespace dice { namespace hfe {
extern void fn_81ef60(void* a);
extern void fn_408228(void* a, void* b, int c);
bool endGame_0x678730(void* self) {
    if (!((bool (*)(void*))(*(void***)self)[0x8])(self))
        return false;
    void* p = *(void**)((char*)self + 0x10);
    fn_81ef60(p);
    *(void**)((char*)self + 0x10) = 0;
    fn_408228((char*)self + 0x18, (void*)0xbb25f1, 0);
    return true;
}
} }
