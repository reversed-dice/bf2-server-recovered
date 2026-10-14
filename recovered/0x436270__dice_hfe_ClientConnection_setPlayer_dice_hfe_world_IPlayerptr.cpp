// FUNCTION: BF2 0x436270
namespace dice { namespace hfe { namespace world { class IPlayer; } } }
namespace dice { namespace hfe {
class PlayerActionManager { public: void setPlayer(world::IPlayer* p); };
class GhostManager { public: void setPlayer(world::IPlayer* p); };

class ClientConnection {
public:
    char _pad[0x10];
    world::IPlayer* m_player;      // +0x10
    char _pad2[0x18];
    PlayerActionManager* m_action; // +0x30
    char _pad3[0x8];
    GhostManager* m_ghost;         // +0x40

    void setPlayer(world::IPlayer* p);
};

void ClientConnection::setPlayer(world::IPlayer* p)
{
    m_player = p;
    if (m_action) {
        m_action->setPlayer(p);
    }
    if (m_ghost) {
        m_ghost->setPlayer(p);
    }
}

} }
