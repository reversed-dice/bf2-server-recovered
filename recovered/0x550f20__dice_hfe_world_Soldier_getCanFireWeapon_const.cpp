// FUNCTION: BF2 0x550f20
namespace dice { namespace hfe { namespace world {
class Soldier {
public:
    unsigned char _pad0[0x5a0];
    float m_a;
    unsigned char _pad1[0x14];
    float m_b;
    unsigned char _pad2[0x8];
    bool getCanFireWeapon() const;
};
bool Soldier::getCanFireWeapon() const {
    return m_a <= 0.0f && m_b <= 0.0f;
}
}}}
