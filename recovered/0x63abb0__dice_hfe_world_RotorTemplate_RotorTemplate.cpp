// FUNCTION: BF2 0x63abb0
namespace dice { namespace hfe {
extern void fn_0x005767f0(void* self);
struct OBJ_63abb0 {
    void* m_0;
    unsigned char _pad1[0x8];
    void* m_10;
    unsigned char _pad2[0x50];
    void* m_68;
    unsigned char _pad3[0x158];
    void* m_1c8;
    unsigned char _pad4[0x24];
    int m_1f4;
    int m_1f8;
    unsigned char _pad5[0x4];
    void* m_200;
    int m_208;
    int m_20c;
    int m_210;
    OBJ_63abb0();
};
OBJ_63abb0::OBJ_63abb0() {
    fn_0x005767f0(this);
    m_0 = (void*)(long)0xb85490;
    m_10 = (void*)(long)0xb85720;
    m_68 = (void*)(long)0xb85758;
    m_1c8 = (void*)(long)0xb857d8;
    m_1f4 = 0x3e4ccccd;
    m_1f8 = 0x3ccccccd;
    m_200 = (void*)(long)0xf6c6e8;
    m_208 = 0x3f800000;
    m_20c = 0x3dcccccd;
    m_210 = 0x2;
}
} }
