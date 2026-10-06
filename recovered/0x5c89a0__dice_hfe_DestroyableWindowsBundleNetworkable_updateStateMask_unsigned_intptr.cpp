// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c89a0
namespace dice { namespace hfe {
namespace io {

class BaseLineData;

class BitStream {
public:
    void writeBits(const void* src, unsigned int bits);
    void readBits(void* dst, unsigned int bits);
    unsigned int getBitPosition() const
    {
        return m_mode == 1 ? m_writePos : m_readPos;
    }
    bool checkOverflow()
    {
        if (m_overflow) {
            m_bitsRead = 0;
            m_overflow = false;
            return true;
        }
        return false;
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

}

extern unsigned int g_netBitsWritten;

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

} }
namespace dice { namespace hfe {

void DestroyableWindowsBundleNetworkable::updateStateMask(unsigned int* mask)
{
    m_previous = m_current;
    m_current = m_sent = (m_current + 1) & 3;
    m_states[m_current].windowState = m_owner->m_windowState;
    if (m_states[m_sent].windowState != m_states[m_previous].windowState)
        *mask |= 1;
}

bool DestroyableWindowsBundleNetworkable::getNetUpdate(io::BitStream& stream, io::BaseLineData* baseLine, unsigned int mask, int client)
{
    m_startBit = stream.getBitPosition();
    m_sent = m_current;
    unsigned int bits = m_owner->getNumStates();
    unsigned int v = m_states[m_sent].windowState;
    stream.writeBits(&v, bits);
    if (stream.checkOverflow())
        return false;
    g_netBitsWritten += stream.getBitPosition() - m_startBit;
    return true;
}

} }
