// FUNCTION: BF2 0x630e00
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int size);
extern void fn_62c2a0(void* a, void* b);
extern void fn_62d950(void* a, void* b);
struct ET2 {
    unsigned char _pad[0x610];
    int m_610;
    void* createObject_0x630e00();
};
void* ET2::createObject_0x630e00() {
    if (m_610 & 0x40) {
        void* p = fn_407508(0x340);
        fn_62c2a0(p, this);
        return p;
    }
    void* p = fn_407508(0x348);
    fn_62d950(p, this);
    return p;
}
} } }
