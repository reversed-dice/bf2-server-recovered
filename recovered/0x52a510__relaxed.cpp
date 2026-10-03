// FUNCTION: BF2 0x52a510
namespace dice { namespace hfe { namespace world {
extern void fn_52a170(void* self);
struct Ladder {
    unsigned char _pad[0x23c];
    char m_flag;
    unsigned char _pad2[0x248 - 0x23d];
    float m_250;
    float getAbsoluteBottomReal_0x52a4d0();
};
float Ladder::getAbsoluteBottomReal_0x52a4d0() {
    if (__builtin_expect(m_flag != 0, 1))
        fn_52a170(this);
    return m_250;
}
} } }
