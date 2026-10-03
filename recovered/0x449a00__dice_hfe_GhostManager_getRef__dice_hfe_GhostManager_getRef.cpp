// FUNCTION: BF2 0x449a00
namespace dice {
namespace hfe {

class GhostManager {
public:
    unsigned char __pad_00[0x18];
    int m_field_18; // at offset 0x18

    int getRef();
};

int GhostManager::getRef()
{
    return m_field_18;
}

} // namespace hfe
} // namespace dice