// FUNCTION: BF2 0x449550
namespace dice {
namespace hfe {

class GhostManager {
public:
    unsigned char __pad_00[0x1c];
    int m_connectionId; // at offset 0x1C

    void setConnectionId(int);
};

void GhostManager::setConnectionId(int connectionId)
{
    m_connectionId = connectionId;
}

} // namespace hfe
} // namespace dice