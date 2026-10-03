// FUNCTION: BF2 0x46d250
namespace dice { namespace hfe {
extern void fn_46cfd0(void* a);
extern void fn_46d280(void* a);
extern void fn_4085b8(void* a);
struct MMS { void* m_0; };
void dtor_0x46d250(MMS* self) {
    fn_46cfd0(self);
    void* p = self->m_0;
    if (p) {
        fn_46d280((char*)p + 0x10);
        fn_4085b8(p);
    }
}
} }
