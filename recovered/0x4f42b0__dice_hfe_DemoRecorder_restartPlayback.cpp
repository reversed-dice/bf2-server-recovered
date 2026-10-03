// FUNCTION: BF2 0x4f42b0
namespace dice { namespace hfe {
extern bool fn_4f1d50();
extern void fn_4f1c50(void* a);
extern void fn_4f3e70(void* a, void* b);
struct DR4 {
    unsigned char _pad[0x8];
    void* m_8;
    unsigned char _pad2[0xc5 - 0x10];
    char m_c5;
    void restartPlayback_0x4f42b0();
};
void DR4::restartPlayback_0x4f42b0() {
    if (fn_4f1d50()) {
        fn_4f1c50(this);
        fn_4f3e70(this, (char*)this + 0x8);
        m_c5 = 1;
    }
}
} }
