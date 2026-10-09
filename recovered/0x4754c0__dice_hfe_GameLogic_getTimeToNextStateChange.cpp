// FUNCTION: BF2 0x4754c0
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad[0x42c - 8];
    unsigned int m_nextStateChangeTick; // +0x42c

    virtual float getTimeToNextStateChange();
};

float GameLogic::getTimeToNextStateChange()
{
    if (m_nextStateChangeTick <= WorldPref::getTickCount())
        return 0.0f;
    return (float)(m_nextStateChangeTick - WorldPref::getTickCount()) / 30.0f;
}

} }
