extern "C" void padcall();
// not the original source: peephole2 scratch phase pad (trick 407), N=6
extern "C" void pad(int* p) {
    if (p[0] == 0) padcall();
    if (p[1] == 0) padcall();
    if (p[2] == 0) padcall();
    if (p[3] == 0) padcall();
    if (p[4] == 0) padcall();
    if (p[5] == 0) padcall();
}

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7d6de0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice {
namespace hfe {

enum DebugType { DEBUG_ERROR = 6 };

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func);
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(m_stream) << val;
    }
    char m_pad[0x20];
    char m_stream[0x160];
};

std::string formatString(char const* fmt, ...);

namespace io {

struct PacketEntry {
    int m_a;
    int m_pad0;
    int m_b;
    int m_pad1;
    int m_pad2;
    int m_pad3;
    void* m_packet;
    PacketEntry() : m_packet(0) {}
};

class PacketQueue {
public:
    PacketQueue(unsigned int numPackets);
private:
    int m_count;
    int m_front;
    int m_tail;
    int m_pad;
    PacketEntry* m_entries;
    char* m_buffer;
    unsigned int m_numEntries;
    unsigned int m_lastEntry;
    bool m_28;
};

PacketQueue::PacketQueue(unsigned int numPackets)
{
    m_numEntries = 0;
    m_lastEntry = 0;
    m_front = 0;
    m_tail = 0;
    m_count = 0;
    m_entries = new PacketEntry[numPackets];
    if (m_entries == 0) {
        Debug(DEBUG_ERROR, std::string("IO/Network/ProtocolLayer/PacketQueue.cpp"), 34,
              std::string(&DAT_00bb25f1))
            << formatString("Failed to allocate memory for PacketQueue");
    } else {
        m_numEntries = numPackets;
        m_lastEntry = numPackets - 1;
        m_buffer = new char[numPackets * 0x5C0];
        if (m_buffer == 0) {
            Debug(DEBUG_ERROR, std::string("IO/Network/ProtocolLayer/PacketQueue.cpp"), 48,
                  std::string(&DAT_00bb25f1))
                << formatString("Failed to allocate memory for PacketQueue");
        } else {
            for (unsigned int i = 0; i < m_numEntries; ++i) {
                m_entries[i].m_a = 0;
                m_entries[i].m_b = 0;
                m_entries[i].m_packet = &m_buffer[i * 0x5C0];
            }
            m_28 = false;
        }
    }
}

} } }
