// FUNCTION: BF2 0x5bd820
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int size);
extern void fn_0x5bd670(void* a, void* b);
struct AGT2 {
    unsigned char _pad[0x14];
    char m_14;
    void* createComponent_0x5bd820();
};
void* AGT2::createComponent_0x5bd820() {
    if (m_14)
        m_14 = 0;
    void* p = fn_407508(0x20);
    fn_0x5bd670(p, this);
    return p;
}
} } }
