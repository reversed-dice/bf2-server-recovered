// FUNCTION: BF2 0x827c10
namespace dice {
extern void fn_827320(void* a);
extern void fn_826e30(void* a);
extern void fn_824d20(void* a);
extern void fn_83ae70(void* a);
void SBServerListCleanup_0x827c10(void* self) {
    fn_827320(self);
    fn_826e30(self);
    fn_824d20(self);
    void* p = *(void**)((char*)self + 8);
    if (p)
        fn_83ae70(p);
    *(void**)((char*)self + 8) = 0;
}
}
