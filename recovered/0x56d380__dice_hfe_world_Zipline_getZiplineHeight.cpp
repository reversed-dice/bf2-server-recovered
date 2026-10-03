// FUNCTION: BF2 0x56d380
namespace dice { namespace hfe { namespace world {
extern void fn_0056d100(void* self);
struct Ladder {
    unsigned char _pad[0x25c];
    char m_flag;
    unsigned char _pad2[0x3];
    float m_260;
    float f_56d380();
};
float Ladder::f_56d380() {
    if (__builtin_expect(m_flag != 0, 1))
        fn_0056d100(this);
    return m_260;
}
} } }
