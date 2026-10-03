// FUNCTION: BF2 0xac2850
namespace dice { namespace hfe {
extern void fn_6a9710(void* a, void* b);
struct CCB {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    void** m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int f_0xac2850();
};
int CCB::f_0xac2850() {
    if (m_30 == 1) {
        void* v = *m_38;
        m_108 = 0;
        fn_6a9710((void*)0x1092d80, v);
    }
    return 0;
}
} }
