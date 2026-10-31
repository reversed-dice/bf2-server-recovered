// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x4097a0
namespace dice { namespace hfe { namespace memory {

class MemoryModuleInfo
{
public:
    void allocate(int n);
    char pad[0x44];
    int m_44;
    int m_48;
    int m_4c;
    int m_50;
    int m_54;
    int m_58;
};

void MemoryModuleInfo::allocate(int n)
{
    int count = ++m_4c;
    if (n < 1)
        return;
    int total = n + m_50;
    m_50 = total;
    int prev;
    if (n < m_54 || m_44 == 0)
        m_54 = n;
    prev = m_44;
    if (m_58 < n)
        m_58 = n;
    if (m_48 < count)
        m_48 = count;
    if (prev < total)
        m_44 = total;
}

} } }
