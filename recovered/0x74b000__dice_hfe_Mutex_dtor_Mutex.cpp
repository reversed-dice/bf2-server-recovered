// FUNCTION: BF2 0x74b000
namespace dice { namespace hfe {
extern void fn_407318(void* a);
extern void fn_4085b8(void* a);
struct MUT { void* m_0; };
void dtor_0x74b000(MUT* self) {
    void* p = self->m_0;
    if (p) {
        fn_407318(p);
        fn_4085b8(p);
    }
}
} }
