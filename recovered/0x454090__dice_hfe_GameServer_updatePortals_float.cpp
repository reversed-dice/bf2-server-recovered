// FUNCTION: BF2 0x454090
namespace dice { namespace hfe {
namespace ai {
class AIInstanceServer {
public:
    virtual void _v00() = 0;
    virtual void _v01() = 0;
    virtual void _v02() = 0;
    virtual void _v03() = 0;
    virtual void _v04() = 0;
    virtual void _v05() = 0;
    virtual void _v06() = 0;
    static AIInstanceServer* m_iAI;
    virtual char isEnabled() = 0;
};
}

namespace world {
class PortalManager {
public:
    virtual void _v00() = 0;
    virtual void _v01() = 0;
    virtual void _v02() = 0;
    virtual void _v03() = 0;
    virtual void _v04() = 0;
    virtual void _v05() = 0;
    virtual void _v06() = 0;
    virtual void _v07() = 0;
    virtual void _v08() = 0;
    virtual void _v09() = 0;
    virtual void _v10() = 0;
    virtual void _v11() = 0;
    virtual void _v12() = 0;
    virtual void _v13() = 0;
    virtual void _v14() = 0;
    virtual void _v15() = 0;
    virtual void update(float dt) = 0;
};
extern PortalManager* portalManager;
}

class GameServer {
public:
    void updatePortals(float dt);
};

void GameServer::updatePortals(float dt)
{
    if (ai::AIInstanceServer::m_iAI != 0) {
        if (ai::AIInstanceServer::m_iAI->isEnabled() != 0) {
            world::portalManager->update(dt);
        }
    }
}

} }
