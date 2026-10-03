// FUNCTION: BF2 0x4ca3a0
namespace dice { namespace hfe {
extern void fn_407cc8(void* a, void* b);
extern void fn_407e08(void* a, void* b, void* c);
void* getActiveCombatAreaName_0x4ca3a0(void* self, void* arg2) {
    void* p = *(void**)arg2;
    if (p) {
        fn_407cc8(self, (char*)p + 0x18);
    } else {
        char tmp;
        fn_407e08(self, (void*)0xbb25f1, &tmp);
    }
    return self;
}
} }
