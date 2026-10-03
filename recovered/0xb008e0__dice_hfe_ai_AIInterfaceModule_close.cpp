// FUNCTION: BF2 0xb008e0
namespace dice { namespace hfe { namespace ai {
extern void fn_b00720(void* a);
extern void fn_738c00(void* a, void* b);
extern void* g_f6c690;
struct CLS { unsigned char _pad[0x18]; char m_18; };
bool close_0xb008e0(CLS* self) {
    fn_b00720(self);
    fn_738c00(g_f6c690, (void*)0x114b5a0);
    self->m_18 = 1;
    return 1;
}
} } }
