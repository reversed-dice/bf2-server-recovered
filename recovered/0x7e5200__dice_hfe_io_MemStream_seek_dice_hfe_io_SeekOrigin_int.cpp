// FUNCTION: BF2 0x7e5200
namespace dice { namespace hfe {
extern bool fn_7a5a80(int a, int b, int c, int* d);
struct OB48 {
    unsigned char _pad[0x20];
    int m_20;
    unsigned char _pad2[0x28 - 0x24];
    int m_28;
    int f_0x7e5200(int arg2, int arg3);
};
int OB48::f_0x7e5200(int arg2, int arg3) {
    int local = m_28;
    if (fn_7a5a80(arg2, arg3, m_20, &local)) {
        m_28 = local;
        return 1;
    }
    return 0;
}
} }
