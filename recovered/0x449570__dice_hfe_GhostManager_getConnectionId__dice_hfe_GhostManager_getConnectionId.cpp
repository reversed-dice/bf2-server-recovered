// FUNCTION: BF2 0x449570
namespace dice {
namespace hfe {

class GhostManager {
public:
    unsigned char __pad_00[0x1c];
    int m_connectionId; // at offset 0x1C

    int getConnectionId();
};

int GhostManager::getConnectionId()
{
    return m_connectionId;
}

} // namespace hfe
} // namespace dice