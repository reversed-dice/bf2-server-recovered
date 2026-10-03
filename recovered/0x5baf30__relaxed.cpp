// FUNCTION: BF2 0x5baf30
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int size);
extern void fn_5ae460(void* a, void* b);
struct AGT {
    unsigned char _pad[0x14];
    char m_14;
    void* createComponent_0x5ae610();
};
void* AGT::createComponent_0x5ae610() {
    if (m_14)
        m_14 = 0;
    void* p = fn_407508(0x28);
    fn_5ae460(p, this);
    return p;
}
} } }
