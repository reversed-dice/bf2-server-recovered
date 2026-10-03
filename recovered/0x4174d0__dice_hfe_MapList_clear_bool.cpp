// FUNCTION: BF2 0x4174d0
namespace dice { namespace hfe {
extern bool fn_417370(void* a);
extern void fn_41a680(void* a);
extern void fn_4173e0(void* a);
struct ML {
    unsigned char _pad[0x8];
    int m_8;
    unsigned char _pad2[0x10 - 0xc];
    char m_10[0x60];
    char m_70;
    bool clear_0x4174d0(bool arg2);
};
bool ML::clear_0x4174d0(bool arg2) {
    char old = m_70;
    if (arg2)
        m_70 = 1;
    if (!fn_417370(this)) {
        m_70 = old;
        return 0;
    }
    m_8 = -1;
    fn_41a680((char*)this + 0x10);
    fn_4173e0(this);
    m_70 = old;
    return 1;
}
} }
