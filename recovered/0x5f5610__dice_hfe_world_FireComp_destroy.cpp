// FUNCTION: BF2 0x5f5610
#include <list>
namespace dice { namespace hfe { namespace world {

class ISound;
class ISoundManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40) V(41) V(42) V(43)
    V(44) V(45) V(46) V(47) V(48) V(49) V(50) V(51)
#undef V
    virtual void stopSound(ISound* s, int flags, float fade);
};
extern ISoundManager* g_soundManager;

struct FireSound { void* _pad0; ISound* sound; };
struct FireCompTemplate { char _pad0[0x280]; float soundFadeTime; };
struct FireCompOwner { char _pad0[0x28]; FireCompTemplate* tmpl; };

class FireComp {
public:
    void destroy();
    char _pad0[0x18];
    FireCompOwner* m_owner;
    char _pad20[0x8];
    std::list<FireSound*> m_sounds;
};

void FireComp::destroy()
{
    for (std::list<FireSound*>::iterator it = m_sounds.begin(); it != m_sounds.end(); ++it) {
        FireSound* s = *it;
        if (s && s->sound)
            g_soundManager->stopSound(s->sound, 0x20, m_owner->tmpl->soundFadeTime);
    }
}

} } }
