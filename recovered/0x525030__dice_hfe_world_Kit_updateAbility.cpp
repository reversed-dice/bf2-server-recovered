// FUNCTION: BF2 0x525030
namespace dice { namespace hfe { namespace world {

class KitTemplate {
public:
    char pad[0x260];
    float m_ability;
    float m_abilityRate;
};

class Kit {
public:
    char pad[0x28];
    KitTemplate* m_template;
    char pad2[0x2c0 - 0x30];
    float m_ability;

    void updateAbility();
};

void Kit::updateAbility()
{
    if (m_template->m_ability != -1.0f) {
        float a = m_ability + m_template->m_abilityRate;
        if (a > 1.0f) a = 1.0f;
        m_ability = a;
    }
}

} } }
