// FUNCTION: BF2 0x803810
namespace dice { namespace hfe {
extern void* fn_83add0(int a, int b, void* c);
struct CI {
    unsigned char _pad[0x890];
    void* m_890;
    bool initCallbacks_0x803810();
};
bool CI::initCallbacks_0x803810() {
    void* r = fn_83add0(0x30, 0x80, (void*)0x803390);
    m_890 = r;
    return r != 0;
}
} }
