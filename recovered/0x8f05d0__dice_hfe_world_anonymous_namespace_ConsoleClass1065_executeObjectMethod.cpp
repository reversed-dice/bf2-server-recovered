// FUNCTION: BF2 0x8f05d0
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
extern void fn_5378c0(void* a, int b);
struct CCXg {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    int* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0x8f05d0();
};
int CCXg::execute_0x8f05d0() {
    if (m_30 == 1) {
        int x = *m_38;
        m_108 = 0;
        void* p = fn_69de30(*(int*)0xc7ce78);
        fn_5378c0(p, x);
    }
    return 0;
}
} } }
