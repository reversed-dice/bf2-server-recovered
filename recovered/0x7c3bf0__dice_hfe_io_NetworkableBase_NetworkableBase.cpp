// FUNCTION: BF2 0x7c3bf0
namespace dice { namespace hfe { namespace io {
extern void fn_7c39c0(void* self);
struct NB {
    void* m_vtable;
    unsigned char _pad[0x30 - 0x8];
    char m_30;
    unsigned char _pad2[0x34 - 0x31];
    int m_34;
    int m_38;
    int m_3c;
    int m_40;
    int m_44;
    int m_48;
    int m_4c;
    NB();
};
NB::NB() {
    fn_7c39c0(this);
    m_vtable = (void*)0xbaa330;
    m_30 = 1;
    m_34 = 0;
    m_38 = 0;
    m_3c = 0;
    m_40 = 0;
    m_44 = 0;
    m_48 = 0;
    m_4c = 0;
}
} } }
