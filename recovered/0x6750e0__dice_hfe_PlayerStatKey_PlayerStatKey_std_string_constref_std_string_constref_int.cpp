// FUNCTION: BF2 0x6750e0
namespace dice { namespace hfe {
extern void fn_407cc8(void* a, void* b);
struct PSK { int m_0; void* m_8; void* m_10; void* m_18; int m_20; };
void ctor_0x6750e0(PSK* self, void* arg2, void* arg3, int arg4) {
    self->m_0 = 0;
    fn_407cc8((char*)self + 8, arg3);
    fn_407cc8((char*)self + 0x10, arg2);
    self->m_20 = arg4;
    self->m_18 = (void*)0xf6c6e8;
}
} }
