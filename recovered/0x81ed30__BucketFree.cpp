// FUNCTION: BF2 0x81ed30
namespace dice { namespace hfe {
extern void fn_83ef10(void* a);
struct BF3 { void* m_0; int m_8; unsigned char _pad[4]; void* m_10; };
void BucketFree_0x81ed30(BF3* self) {
    fn_83ef10(self->m_0);
    if (self->m_8 == 2 && self->m_10)
        fn_83ef10(self->m_10);
}
} }
