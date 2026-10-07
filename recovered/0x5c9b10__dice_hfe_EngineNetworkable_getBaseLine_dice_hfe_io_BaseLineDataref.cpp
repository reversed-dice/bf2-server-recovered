// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c9b10
namespace dice { namespace hfe {
namespace io {

class BaseLineData {
public:
    short m_data[0x200];
    unsigned short m_pos;
};

}

struct EngineNetworkableState {
    char _pad0[0x14];
    int f1;
    int f2;
    int _pad1;
    int f3;
    int f4;
    char _pad2[60 - 0x28];
};

class EngineNetworkable {
public:
    virtual void unk();
    bool getBaseLine(io::BaseLineData& bl);

    char _pad0[0x3c - 8];
    unsigned int m_current;
    char _pad1[0x4c - 0x40];
    unsigned int m_sent;
    char _pad2[0x80 - 0x50];
    EngineNetworkableState* m_states;
};

bool EngineNetworkable::getBaseLine(io::BaseLineData& bl)
{
    unsigned int* dst = (unsigned int*)((char*)&bl + (unsigned long)bl.m_pos * 2);
    if ((unsigned long)bl.m_pos + 0x10 <= 0x200) {
        m_sent = m_current;
        dst[0] = m_states[m_current].f1;
        dst[1] = m_states[m_sent].f2;
        dst[2] = m_states[m_sent].f3;
        dst[3] = m_states[m_sent].f4;
        bl.m_pos += 0x10;
        return true;
    }
    return false;
}

} }
