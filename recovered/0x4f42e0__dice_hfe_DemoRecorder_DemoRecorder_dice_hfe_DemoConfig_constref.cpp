// FUNCTION: BF2 0x4f42e0
namespace dice { namespace hfe {
extern void fn_4effd0(void* a);
extern void fn_4f3e70(void* a, void* b);
struct DR2 { void* m_0; unsigned char _pad[0x58 - 0x8]; void* m_58; void* m_60; unsigned char _pad2[0xb0 - 0x68]; void* m_b0; void* m_b8; };
void ctor_0x4f42e0(DR2* self, void* arg2) {
    fn_4effd0((char*)self + 8);
    self->m_58 = (void*)0xf6c6e8;
    self->m_60 = (void*)0xf6c6e8;
    void* p = (char*)self + 0xb0;
    self->m_b0 = p;
    *(void**)((char*)p + 8) = p;
    fn_4f3e70(self, arg2);
}
} }
