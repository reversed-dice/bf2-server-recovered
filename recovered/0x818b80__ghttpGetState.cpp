// FUNCTION: BF2 0x818b80
namespace dice { namespace hfe {
extern void* fn_817b70();
struct OB13 {
    unsigned char _pad[0x10];
    int m_10;
};
int f_0x818b80() {
    OB13* p = (OB13*)fn_817b70();
    if (!p)
        return 0;
    return p->m_10;
}
} }
