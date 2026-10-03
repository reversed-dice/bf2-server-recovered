// FUNCTION: BF2 0x74b030
namespace dice { namespace hfe {
extern void* fn_407508(int a);
extern void fn_408068(void* a, int b);
struct MC { void* m_0; };
void Mutex_0x74b030(MC* self) {
    void* p = fn_407508(0x28);
    fn_408068(p, 0);
    self->m_0 = p;
}
} }
