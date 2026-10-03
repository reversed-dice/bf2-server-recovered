// FUNCTION: BF2 0x743340
namespace dice { namespace hfe {
extern void* fn_408438(void* a);
extern void* fn_407358(void* a, void* b);
extern void* fn_407628(void* a, void* b);
void beginHeader_0x743340(void* self, void* arg2, void* arg3) {
    void* p = fn_408438((char*)self + 0x18);
    fn_407358(p, arg2);
    if (__builtin_expect(*(long*)((char*)*(void**)arg3 - 0x18) != 0, 1)) {
        void* q = fn_407628((char*)self + 0x18, (void*)0xb3a117);
        fn_407358(q, arg3);
    }
    fn_408438((char*)self + 0x18);
}
} }
