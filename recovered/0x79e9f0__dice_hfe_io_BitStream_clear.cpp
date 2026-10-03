// FUNCTION: BF2 0x79e9f0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
} }
namespace dice { namespace hfe { namespace io { 

class BitStream {
public:
    char _pad0[0x14];
    int m_14;
    int m_18;
    int m_1c;
    bool m_20;
    char _pad21[0x3];
    int m_24;
    int m_28;
    int m_2c;
    bool m_30;
    char _pad31[0x7];
    int m_38;
    bool m_3c;
    char _pad3d[0x17];
    bool m_54;
    char _pad55[0x3];
    dice::hfe::Vec3 m_58;
    bool m_64;
    void clear();
};

void BitStream::clear()
{
    m_38 = 0;
    m_20 = false;
    m_24 = 0;
    m_3c = false;
    m_54 = false;
    m_64 = false;
    m_58.zero();
    m_1c = 0;
    m_18 = 0;
    m_14 = 0;
    m_28 = 0;
    m_2c = 0;
    m_30 = false;
}

}}}
