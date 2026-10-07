// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5d6ee0
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

struct SimpleObjectNetworkableState {
    char _pad0[0xc];
    Vec3 m_pos1;
    char _pad1[0x38 - 0xc - 12];
    Vec3 m_pos2;
    char _pad2[0x5c - 0x38 - 12];
    Vec3 m_pos3;
    char _pad3[0xbc - 0x5c - 12];
};

class SimpleObjectNetworkable {
public:
    virtual void unk();
    bool getBaseLine(io::BaseLineData& bl);

    char _pad0[0x3c - 8];
    unsigned int m_current;
    char _pad1[0x4c - 0x40];
    unsigned int m_sent;
    char _pad2[0x78 - 0x50];
    SimpleObjectNetworkableState* m_states;
};

bool SimpleObjectNetworkable::getBaseLine(io::BaseLineData& bl)
{
    unsigned int* dst = (unsigned int*)((char*)&bl + (unsigned long)bl.m_pos * 2);
    if ((unsigned long)bl.m_pos + 0x24 <= 0x200) {
        Vec3* dst2 = (Vec3*)(dst + 3);
        m_sent = m_current;
        Vec3* src1 = &m_states[m_current].m_pos1;
        int a1 = src1->x;
        int c1 = src1->z;
        int b1 = src1->y;
        dst[0] = a1;
        dst[1] = b1;
        dst[2] = c1;

        Vec3* src2 = &m_states[m_sent].m_pos2;
        int a2 = src2->x;
        int c2 = src2->z;
        int b2 = src2->y;
        dst[3] = a2;
        dst2->y = b2;
        dst2->z = c2;

        Vec3* dst3 = (Vec3*)(dst + 6);
        Vec3* src3 = &m_states[m_sent].m_pos3;
        int a3 = src3->x;
        int c3 = src3->z;
        int b3 = src3->y;
        dst[6] = a3;
        dst3->y = b3;
        dst3->z = c3;

        bl.m_pos += 0x24;
        return true;
    }
    return false;
}

} }
