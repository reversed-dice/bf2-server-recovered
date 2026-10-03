// FUNCTION: BF2 0x985f30
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
extern void fn_58cc00(void* a);
struct CCXv {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    unsigned char* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0x985f30();
};
int CCXv::execute_0x985f30() {
    if (m_30 == 1) {
        unsigned char x = *m_38;
        m_108 = 0;
        void* p = fn_69de30(*(int*)0xc7d078);
        *(unsigned char*)((char*)p + 0xe8) = (*(unsigned char*)((char*)p + 0xe8) & 0xffffffefu) | ((x & 1u) << 0x4);
        fn_58cc00(p);
    }
    return 0;
}
} } }
