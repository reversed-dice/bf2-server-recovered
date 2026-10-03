// FUNCTION: BF2 0x56c2a0
namespace dice { namespace hfe { namespace world {
extern void fn_573010(void* a, int* b);
extern void fn_522610(void* a);
extern void fn_58b170(void* a);
struct ZP {
    void* m_0;
    unsigned char _pad[0x100 - 0x8];
    void* m_100;
    unsigned char _pad2[0x258 - 0x108];
    int m_258;
    ~ZP();
};
ZP::~ZP() {
    m_0 = (void*)0xb54f30;
    m_100 = (void*)0xb55240;
    int v = m_258;
    fn_573010((void*)0x108f4c0, &v);
    fn_522610((char*)this + 0x230);
    fn_58b170(this);
}
} } }
