// FUNCTION: BF2 0x449560
namespace dice {
namespace hfe {

class GhostManager {
public:
    unsigned char __pad_00[0x20];
    int m_field_20; // at offset 0x20

    int getError();
};

int GhostManager::getError()
{
    return m_field_20;
}

} // namespace hfe
} // namespace dice