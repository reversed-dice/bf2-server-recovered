// FUNCTION: BF2 0x7e66e0
namespace dice { namespace hfe { namespace io {
extern void* fn_7e65d0(void* a);
extern void fn_74c450(void* a, void* b);
extern void fn_74d0f0(void* a);
struct ZRS { unsigned char _pad[0x10]; void* m_10; void* m_18; void* m_20; unsigned char _pad2[0x28 - 0x28]; int m_28; int m_2c; int m_30; };
void init_0x7e66e0(ZRS* self, void* arg2) {
    self->m_30 = 0;
    self->m_2c = 0;
    self->m_28 = 0;
    void* p = fn_7e65d0(self->m_10);
    self->m_20 = p;
    fn_74c450(*(void**)p, (char*)self->m_18 + 0x88);
    fn_74d0f0(*(void**)self->m_20);
}
} } }
