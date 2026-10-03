// FUNCTION: BF2 0x58b7b0
namespace dice { namespace hfe { namespace world {
extern void fn_58b700(void* a);
extern void* fn_407508(int size);
extern void fn_58a860(void* a, void* b);
struct SOT2 {
    unsigned char _pad[0x1c4];
    char m_1c4;
    void* createObject_0x58b7b0();
};
void* SOT2::createObject_0x58b7b0() {
    if (__builtin_expect(m_1c4 == 0, 1))
        fn_58b700(this);
    void* p = fn_407508(0x230);
    fn_58a860(p, this);
    return p;
}
} } }
