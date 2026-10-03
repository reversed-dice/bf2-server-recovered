// FUNCTION: BF2 0x600be0
#include <vector>
namespace dice { namespace hfe {
class WorldPref { public: static int getTickCount(); };
namespace world {

class IObject;
enum FireState {};
struct ThrownFireCompTemplate { char _pad0[0x54]; int throwDelay; char _pad58[0x44]; int holdTime; };

class ThrownFireComp {
public:
    bool fire(bool, int);
    bool setThrowState(FireState s, bool force);
    void launchProjectile();
    char _pad0[0x44];
    int m_fireTick;
    char _pad48[0x58];
    std::vector<IObject*> m_targets;
    char _padb8[0xb0];
    int m_holdStartTick;
    char _pad16c[0x4c];
    int m_releaseTick;
    char _pad1bc[0x4];
    ThrownFireCompTemplate* m_template;
};

bool ThrownFireComp::fire(bool, int)
{
    m_targets.clear();
    bool fired = false;
    if (setThrowState((FireState)2, false)) {
        fired = true;
        if (m_template->holdTime > 0) {
            m_holdStartTick = WorldPref::getTickCount();
            return fired;
        }
    }
    if (setThrowState((FireState)0, true)) {
        launchProjectile();
        m_fireTick = WorldPref::getTickCount();
        m_releaseTick = m_fireTick + m_template->throwDelay;
    }
    return fired;
}

} } }
