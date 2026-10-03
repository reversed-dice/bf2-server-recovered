// FUNCTION: BF2 0x685320
namespace dice { namespace hfe { namespace world {
extern void fn_683a70(void* a, void* b);
extern void fn_684940(void* a, void* b, int c);
struct BCO3 { unsigned char _pad[0x10]; void* m_10; };
void optimize_0x685320(BCO3* self) {
    if (__builtin_expect(self->m_10 != 0, 1)) {
        fn_683a70(self, self->m_10);
        fn_684940(self, self->m_10, 1);
    }
}
} } }
