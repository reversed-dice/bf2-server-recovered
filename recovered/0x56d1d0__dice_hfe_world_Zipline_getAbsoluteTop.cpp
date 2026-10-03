// FUNCTION: BF2 0x56d1d0
namespace dice { namespace hfe { namespace world {
extern void fn_0056d100(void* self);
struct Ladder {
    unsigned char _pad[0x25c];
    char m_flag;
    unsigned char _pad2[0xb];
    float m_268;
    float f_56d1d0();
};
float Ladder::f_56d1d0() {
    if (__builtin_expect(m_flag != 0, 1))
        fn_0056d100(this);
    return m_268;
}
} } }
