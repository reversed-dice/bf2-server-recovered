// BF2_FLAGS: -fno-tree-dominator-opts -fno-strict-aliasing
// FUNCTION: BF2 0x5c8b80
namespace dice { namespace hfe {
namespace io {

class BaseLineData;

class BitStream {
public:
    void writeBits(const void* src, unsigned int bits);
    void readBits(void* dst, unsigned int bits);
    unsigned int getBitPosition() const
    {
        return (m_mode - 1 == 0) ? m_writePos : m_readPos;
    }
    char _pad0[0x14];
    unsigned int m_writePos;
    unsigned int m_readPos;
    char _pad1[4];
    bool m_overflow;
    unsigned int m_bitsRead;
    char _pad2[0x10];
    int m_mode;
};

struct RegistredNetworkStats {
    char pad[8];
    unsigned int m_bits;
};

}

namespace world {
class DestroyableWindowsBundle {
public:
    unsigned int getNumStates() const;
    char _pad[0x23c];
    unsigned int m_windowState;
};
}

struct DestroyableWindowsBundleState {
    char _pad[8];
    unsigned int windowState;
};

class DestroyableWindowsBundleNetworkable {
public:
    static io::RegistredNetworkStats m_stats;

    virtual ~DestroyableWindowsBundleNetworkable();
    void updateStateMask(unsigned int* mask);
    bool getNetUpdate(io::BitStream& stream, io::BaseLineData* baseLine, unsigned int mask, int client);
    char _pad0[0x34];
    unsigned int m_current;
    char _pad1[4];
    unsigned int m_startBit;
    unsigned int m_previous;
    unsigned int m_sent;
    char _pad2[0x28];
    DestroyableWindowsBundleState* m_states;
    world::DestroyableWindowsBundle* m_owner;
};

io::RegistredNetworkStats DestroyableWindowsBundleNetworkable::m_stats;

bool DestroyableWindowsBundleNetworkable::getNetUpdate(io::BitStream& stream, io::BaseLineData* baseLine, unsigned int mask, int client)
{
    m_startBit = stream.getBitPosition();
    m_sent = m_current;
    unsigned int bits = m_owner->getNumStates();
    unsigned int v = m_states[m_sent].windowState;
    stream.writeBits(&v, bits);
    if (stream.m_overflow) {
        stream.m_bitsRead = 0;
        stream.m_overflow = false;
        return false;
    }
    m_stats.m_bits += stream.getBitPosition() - m_startBit;
    return true;
}

} }
