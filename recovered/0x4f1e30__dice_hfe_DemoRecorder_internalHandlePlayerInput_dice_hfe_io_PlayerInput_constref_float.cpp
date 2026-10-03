// FUNCTION: BF2 0x4f1e30
namespace dice { namespace hfe {
extern void fn_4f5f40(void* a, float b);
struct IHPI { unsigned char _pad[0x78]; char m_78; unsigned char _pad2[0xa0 - 0x79]; void* m_a0; };
void internalHandlePlayerInput_0x4f1e30(IHPI* self, float arg2) {
    void* p = self->m_a0;
    if (p && !self->m_78) {
        fn_4f5f40(p, arg2);
    }
}
} }
