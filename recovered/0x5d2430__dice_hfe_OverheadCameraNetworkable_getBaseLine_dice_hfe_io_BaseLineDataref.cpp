// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5d2430
namespace dice { namespace hfe {
namespace io {

class BaseLineData {
public:
    short m_data[0x200];
    unsigned short m_pos;
};

}

struct Vec3 {
    int x, y, z;
};

struct OverheadCameraNetworkableState {
    char _pad0[0xc];
    Vec3 m_pos;
    char _pad1[40 - 0xc - 12];
};

class OverheadCameraNetworkable {
public:
    virtual void unk();
    bool getBaseLine(io::BaseLineData& bl);

    char _pad0[0x3c - 8];
    unsigned int m_current;
    char _pad1[0x78 - 0x40];
    OverheadCameraNetworkableState* m_states;
};

bool OverheadCameraNetworkable::getBaseLine(io::BaseLineData& bl)
{
    unsigned int* dst = (unsigned int*)((char*)&bl + (unsigned long)bl.m_pos * 2);
    if ((unsigned long)bl.m_pos + 12 <= 0x200) {
        Vec3* src = &m_states[m_current].m_pos;
        int a = src->x;
        int c = src->z;
        int b = src->y;
        dst[0] = a;
        dst[1] = b;
        dst[2] = c;
        bl.m_pos += 12;
        return true;
    }
    return false;
}

} }
