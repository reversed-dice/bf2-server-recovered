// FUNCTION: BF2 0x818cb0
namespace dice { namespace hfe {
extern void* fn_817b70();
struct OB14 {
    unsigned char _pad[0x200];
    int m_200;
};
void f_0x818cb0(void* unused, int x) {
    OB14* p = (OB14*)fn_817b70();
    if (p)
        p->m_200 = x;
}
} }
