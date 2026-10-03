// FUNCTION: BF2 0x78ba50
namespace dice { namespace hfe { namespace ai {
extern void fn_78bd90(void* a);
extern void* fn_407508(int size);
extern void fn_4083d8(void* a, int b);
extern void fn_78b8e0(void* a);
struct BFT {
    void* m_0;
    unsigned char _pad[0x18 - 0x8];
    void* m_18;
    BFT();
};
BFT::BFT() {
    fn_78bd90(this);
    m_0 = (void*)0xba4f70;
    void* p = fn_407508(0x10);
    fn_4083d8(p, 0);
    m_18 = p;
    fn_78b8e0(this);
}
} } }
