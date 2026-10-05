// FUNCTION: BF2 0x5fca00
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

namespace world {

enum FireState { FireStateIdle, FireState1, FireState2, FireState3, FireStateFire };

struct SingleFireTemplate {
    unsigned char _pad[0x2c];
    unsigned int delay;
};

class FireComp {
public:
    bool preUpdate();
    void setFireState(FireState s);
    unsigned char _pad0[0x94];
    bool m_x94;
};

class SingleFireComp : public FireComp {
public:
    int preUpdate();
    unsigned char _pad1[0x168 - 0x95];
    int m_startTick;
    bool m_armed;
    unsigned char _pad2[0x188 - 0x16d];
    SingleFireTemplate* m_template;
};

int SingleFireComp::preUpdate()
{
    if (FireComp::preUpdate())
        return 1;
    if (m_armed && m_startTick + m_template->delay < WorldPref::getTickCount()) {
        m_x94 = false;
        m_armed = false;
        setFireState(FireStateFire);
        return 1;
    }
    return 0;
}

} } }
