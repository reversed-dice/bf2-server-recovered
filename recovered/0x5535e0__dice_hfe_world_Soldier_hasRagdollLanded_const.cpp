// FUNCTION: BF2 0x5535e0
// BF2_COMPILER: gcc-4.0
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

namespace world {

class Ragdoll {
public:
    char _pad[0x77];
    char m_landed;
};

class SoldierTemplate {
public:
    char _pad[0x328];
    float m_timeout;
};

class Soldier {
public:
    char _pad[0x258];
    SoldierTemplate* m_template;
    char _pad2[0x3f0 - 0x260];
    Ragdoll* m_ragdoll;
    unsigned int m_ragdollTime;

    bool hasRagdollLanded() const;
};

bool Soldier::hasRagdollLanded() const {
    if (m_ragdoll) {
        if (!m_ragdoll->m_landed) {
            return false;
        }
        float limit = (float)(unsigned long long)m_ragdollTime + 30.0f * m_template->m_timeout;
        if ((float)(unsigned long long)WorldPref::getTickCount() > limit) {
            return true;
        }
        return false;
    }
    return true;
}

} } }
