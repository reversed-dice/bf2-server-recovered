// FUNCTION: BF2 0x413f90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <list>
namespace dice { namespace hfe {

class MapInfo {
public:
    MapInfo();
    std::string m_name;
    std::string m_mode;
    std::string m_description;
    int m_maxPlayers;
    bool m_enabled;
    int m_size;
    short m_24;
    bool m_custom;
    std::vector<int> m_sizes;
};

class ITimer {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30();
    virtual double getTime();
};
extern ITimer* g_timer;

class GameEvent;

class Game {
public:
    Game();
    virtual ~Game();
    void registerGameEvents();
    MapInfo m_mapInfo;
    void* m_48;
    std::list<GameEvent*> m_events;
    double m_startTime;
    int m_state;
    int m_round;
    int m_ticks;
    bool m_paused;
    int m_78;
};

Game::Game()
{
    m_startTime = g_timer->getTime();
    registerGameEvents();
    m_state = 0;
    m_round = 1;
    m_ticks = 0;
    m_78 = 0;
    m_paused = false;
}

Game::~Game() {}

} }
