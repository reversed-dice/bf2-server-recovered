// FUNCTION: BF2 0x646920
namespace dice { namespace hfe {
extern void fn_646380(void* a, int b);
extern void fn_6456e0(void* a, void* b);
struct TCC { void* m_0; };
void ctor_0x646920(TCC* self, void* arg2) {
    fn_646380(self, 2);
    self->m_0 = (void*)0xb882d0;
    fn_6456e0(arg2, self);
}
} }
