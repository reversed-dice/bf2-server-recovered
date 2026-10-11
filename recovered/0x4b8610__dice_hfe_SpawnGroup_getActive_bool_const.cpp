// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b8610
#include <vector>
namespace dice { namespace hfe {

extern unsigned int IID_IGameServer;

class IGame {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int) const;
};

extern IGame* game;

class ISpawnPoint {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual bool getActive(bool isAI, int team) const;
    virtual ~ISpawnPoint();
};

class SpawnGroup {
public:
    virtual void dummy();
    bool getActive(bool isAI) const;
private:
    char _pad1[0x54];
    int m_team;
    char _pad2[0x18];
    bool m_active;
    char _pad3[0x80 - 0x79];
    std::vector<ISpawnPoint*> m_spawnPoints;
    char _pad4[0x9a - 0x98];
    bool m_humanOnSpawn;
    bool m_aiOnSpawn;
};

bool SpawnGroup::getActive(bool isAI) const
{
    if (m_active)
    {
        if (game->queryInterface(IID_IGameServer) == 0)
            return true;
        if (m_active)
        {
            if (isAI)
            {
                if (m_aiOnSpawn)
                    return false;
            }
            else
            {
                if (m_humanOnSpawn)
                    return false;
            }
            for (std::vector<ISpawnPoint*>::const_iterator it = m_spawnPoints.begin(); it != m_spawnPoints.end(); ++it)
            {
                if ((*it)->getActive(isAI, m_team))
                    return true;
            }
        }
    }
    return false;
}

} }
