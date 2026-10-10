// FUNCTION: BF2 0x622df0
namespace dice { namespace hfe {

namespace WorldPref {
unsigned int getTickCount();
}

namespace world {

struct Comp18 {
    char _pad[0x304];
    int m_304;
};

struct Comp58 {
    char _pad[0x24];
    int m_24;
};

class SeekClosestTargetComp {
public:
    void updateComponent(float deltaTime, unsigned int updatePass);
    void checkTarget();
    void seekForBestTarget();

    char _pad0[0x18];
    Comp18* m_18;
    char _pad1[0x38];
    Comp58* m_58;
    float m_60;
};

extern float* g_ignoreFriendlyTimer;

void SeekClosestTargetComp::updateComponent(float deltaTime, unsigned int)
{
    if (m_18->m_304 + m_58->m_24 > dice::hfe::WorldPref::getTickCount()) {
        return;
    }
    checkTarget();
    seekForBestTarget();
    if (*g_ignoreFriendlyTimer > m_60) {
        m_60 += deltaTime;
    }
}

} } }
