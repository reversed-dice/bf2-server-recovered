// FUNCTION: BF2 0x832df0
namespace dice { namespace hfe {
extern void fn_83ef10(void* obj);
struct MSG {
    void* m_ptr;
    void f_0x832df0();
};
void MSG::f_0x832df0() {
    fn_83ef10(m_ptr);
    m_ptr = 0;
}
} }
