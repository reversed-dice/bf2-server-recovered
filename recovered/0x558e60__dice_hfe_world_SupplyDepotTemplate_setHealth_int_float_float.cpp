// BF2_FLAGS: -fno-tree-ter
// FUNCTION: BF2 0x558e60
namespace dice { namespace hfe { namespace world {

class SupplyDepotTemplate {
public:
    void setHealth(int health, float f1, float f2);

    char _pad[0x268];
    float m_f268;
    float m_f26c;
    float m_f270;
    float m_f274;
    float m_f278;
};

void SupplyDepotTemplate::setHealth(int health, float f1, float f2)
{
    float inv = 1.0f / f1;
    m_f268 = f1;
    m_f278 = f2;
    float h = (float)health;
    m_f26c = inv;
    m_f270 = h;
    m_f274 = h;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyDepotTemplate_setHealth_int_float_float (0x558e60)
