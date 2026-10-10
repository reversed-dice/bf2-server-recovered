// FUNCTION: BF2 0x7d76c0
// BF2_FLAGS: -fno-strict-aliasing
#include <deque>

struct SWConnection {
    char pad0[0x110];
    std::deque<bool> m_queue;   // +0x110
    bool getPacketDeliveryStatus(bool& out);
};

bool SWConnection::getPacketDeliveryStatus(bool& out) {
    if (m_queue.empty())
        return false;
    out = m_queue.front();
    m_queue.pop_front();
    return true;
}
