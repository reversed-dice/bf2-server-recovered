// FUNCTION: BF2 0x9cbf10
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
extern void fn_5a3310(void* a);
struct CCXk {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    unsigned char* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0x9cbf10();
};
int CCXk::execute_0x9cbf10() {
    if (m_30 == 1) {
        unsigned char x = *m_38;
        m_108 = 0;
        void* p = fn_69de30(*(int*)0xc7d080);
        *(unsigned char*)((char*)p + 0x99) = x;
        fn_5a3310(p);
    }
    return 0;
}
} } }
