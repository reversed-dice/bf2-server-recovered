// FUNCTION: BF2 0x765790
namespace dice { namespace hfe {
extern void fn_407998(void* a, double b);
extern void fn_408108(void* a, int b);
struct OSE { float m_0; float m_4; float m_8; };
void* operator_0x765790(void* arg1, OSE* arg2) {
    fn_407998(arg1, (double)arg2->m_0);
    fn_408108(arg1, 0x2f);
    fn_407998(arg1, (double)arg2->m_4);
    fn_408108(arg1, 0x2f);
    fn_407998(arg1, (double)arg2->m_8);
    fn_408108(arg1, 0x2f);
    return arg1;
}
} }
