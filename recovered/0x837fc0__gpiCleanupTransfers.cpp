// FUNCTION: BF2 0x837fc0
namespace dice { namespace hfe {
extern void fn_83ae70(void* a);
void gpiCleanupTransfers_0x837fc0(void* self) {
    void* p = *(void**)self;
    void* q = *(void**)((char*)p + 0x508);
    if (q)
        fn_83ae70(q);
    *(void**)((char*)p + 0x508) = 0;
}
} }
