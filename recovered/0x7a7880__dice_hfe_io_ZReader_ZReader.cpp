// FUNCTION: BF2 0x7a7880
namespace dice { namespace hfe { namespace io {
extern void* fn_407508(int size);
extern void* fn_4073a8(int size);
struct ZR {
    char m_0;
    char m_1;
    char m_2;
    unsigned char _pad[0x8 - 0x3];
    void* m_8;
    void* m_10;
    int m_18;
    void* m_20;
    ZR();
};
ZR::ZR() {
    m_0 = 0;
    m_1 = 0;
    m_2 = 0;
    m_8 = fn_407508(0x70);
    m_10 = 0;
    m_18 = 0x1000;
    m_20 = fn_4073a8(0x1000);
}
} } }
