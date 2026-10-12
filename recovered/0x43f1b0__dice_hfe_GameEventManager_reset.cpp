// FUNCTION: BF2 0x43f1b0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>

namespace dice { namespace hfe {

struct GameEvent;
template <class T> struct SmartPtr { T* m_p; };

class GameEventManager {
public:
    void reset();

private:
    unsigned char _pad0[0x20];
    std::list<SmartPtr<GameEvent> > m_l20;
    unsigned char _pad1[0xa0];
    std::map<int, std::list<SmartPtr<GameEvent> >*> m_map;
    unsigned char _pad2[0x10];
    int m_110;
    int m_114;
    unsigned char _pad3[0xc];
    int m_124;
    int m_128;
    int m_12c;
    int m_130;
    unsigned char _pad4[0x4];
    std::list<SmartPtr<GameEvent> >* m_arr138[32];
};

void GameEventManager::reset()
{
    m_l20.clear();
    m_110 = 0;
    m_114 = 0;
    m_124 = 0;
    m_130 = 0;
    m_128 = 0;
    m_12c = 0;

    for (std::map<int, std::list<SmartPtr<GameEvent> >*>::iterator it = m_map.begin();
         it != m_map.end(); ++it) {
        delete it->second;
        it->second = 0;
    }

    for (int i = 0; i < 32; ++i) {
        delete m_arr138[i];
        m_arr138[i] = 0;
    }
}

} }
