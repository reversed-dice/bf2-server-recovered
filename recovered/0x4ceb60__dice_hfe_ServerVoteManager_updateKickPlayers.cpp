// FUNCTION: BF2 0x4ceb60
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe {

namespace io {

class NetworkableDescriptor;
class ConnectionStatus;

enum PResult { PRESULT_NONE = 0, PRESULT_KICKED = 0x15 };

} // namespace io

class IBase;
class GameEvent;
class EventNode;
class HTTPRequest;

enum ConnectionType { CONNECTIONTYPE_NONE = 0 };
enum TargetChannel { TARGETCHANNEL_NONE = 0 };
enum ChannelMessageType { CHANNELMESSAGETYPE_NONE = 0 };

namespace world { class IPlayer; }

extern unsigned int IID_IGameServer;

class IGameServer {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual void addScopableGhost(dice::hfe::io::NetworkableDescriptor*);
    virtual void removeGhost(dice::hfe::io::NetworkableDescriptor*);
    virtual void addStaticGhost(dice::hfe::io::NetworkableDescriptor*);
    virtual void startServer(std::string const&, int, int);
    virtual void createPlayer(std::string const&, bool);
    virtual void createAndSpawnAIPlayer(std::string const&, int, int);
    virtual void destroyPlayer(dice::hfe::world::IPlayer*);
    virtual void challengeResponse(int, dice::hfe::GameEvent*);
    virtual void setConnectionType(int, dice::hfe::ConnectionType);
    virtual void chokeBandwidth();
    virtual void changePlayerName(int, std::string const&);
    virtual void getConnection(int) const;
    virtual void getConnectionState(int) const;
    virtual void getConnectionStatus(int, dice::hfe::io::ConnectionStatus&);
    virtual void toggleFreeCamera(dice::hfe::world::IPlayer*);
    virtual void resetConnections();
    virtual void debugShowActiveGhosts(int);
    virtual void debugShowStreamManagerSizes();
    virtual void debugShowGhostPriorities(int);
    virtual void getTotalActiveGhosts();
    virtual void getPlayerConnectionIp(dice::hfe::world::IPlayer*, std::string&);
    virtual void getPlayerConnectionIpAndPort(dice::hfe::world::IPlayer*, std::string&);
    virtual void updatePlayersVoipStatusOnAllClients(int, bool);
    virtual void kickPlayer(int, dice::hfe::io::PResult, std::string const&);
};

class Game {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
};

extern Game* game;

namespace world {

class PlayerManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual void addPlayer(IPlayer*);
    virtual void removePlayer(IPlayer*);
    virtual void removePlayerId(int);
    virtual void getPlayerFromName(std::string const&);
    virtual IPlayer* getPlayerFromId(int);
};

extern PlayerManager* playerManager;

} // namespace world

class ServerVoteManager {
public:
    void updateKickPlayers();
private:
    char m_pad[0x390];
    std::list<int> m_kickPlayers;
};

void ServerVoteManager::updateKickPlayers()
{
    for (std::list<int>::iterator it = m_kickPlayers.begin(); it != m_kickPlayers.end(); ++it)
    {
        std::string second("KICKED");
        if (world::playerManager->getPlayerFromId(*it) != 0)
        {
            IGameServer* gs = (IGameServer*)game->queryInterface(IID_IGameServer);
            if (gs != 0)
                gs->kickPlayer(*it, io::PRESULT_KICKED, "");
        }
    }
    m_kickPlayers.clear();
}

} // namespace hfe
} // namespace dice
