// FUNCTION: BF2 0x439480
// BF2_FLAGS: -fno-strict-aliasing
#include <deque>

namespace dice { namespace hfe {
struct PacketStatus { unsigned long long m_0, m_1, m_2, m_3, m_4, m_5; unsigned char m_30; };
}}

template class std::deque<dice::hfe::PacketStatus>;
