// FUNCTION: BF2 0x838220
namespace dice { namespace hfe {
extern void* fn_83eef0(int a);
extern void fn_82ecb0(void* a, void* b, void* c, void* d, int e, int f);
struct GTE2c { void* m_0; };
void gpiTransferError_0x838220(GTE2c* self, void* arg2) {
    void* p = self->m_0;
    void* q = fn_83eef0(0x18);
    if (!q)
        return;
    *(void**)q = 0;
    *(void**)((char*)q + 8) = 0;
    *(void**)((char*)q + 0x10) = 0;
    *(int*)q = *(int*)((char*)arg2 + 0x1c);
    *(int*)((char*)q + 4) = 0x808;
    void* a208 = *(void**)((char*)p + 0x208);
    fn_82ecb0(self, a208, *(void**)((char*)p + 0x210), q, 0, 7);
}
} }
