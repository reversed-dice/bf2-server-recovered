// FUNCTION: BF2 0x451f80
#include <string>

namespace dice { namespace hfe {

namespace io {
class NetworkableDescriptor;
class ConnectionStatus;
class PlayerInput;
enum PResult { PRESULT_NONE = 0, PRESULT_KICKED = 0x15 };
}

class IBase;
class GameEvent;
class EventNode;
class HTTPRequest;

enum ConnectionType { CONNECTIONTYPE_NONE = 0 };
enum TargetChannel { TARGETCHANNEL_NONE = 0 };
enum ChannelMessageType { CHANNELMESSAGETYPE_NONE = 0 };

namespace world {
class IObject;
enum UpdateFreqencyType { UPDATEFREQUENCYTYPE_NONE = 0 };
class IPlayer;
}

template <class T> class Flag32Bits;

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

namespace gamespy { extern int g_gameID; }

extern "C" char const* gcd_getkeyhash(int, int);

namespace world {

class IPlayer {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual void getClassID() const;
    virtual ~IPlayer();
    virtual void getWeakPtr();
    virtual void setName(std::string const&);
    virtual void getName() const;
    virtual void setFlags(dice::hfe::Flag32Bits<dice::hfe::world::IPlayer> const&);
    virtual void testFlags(dice::hfe::Flag32Bits<dice::hfe::world::IPlayer> const&) const;
    virtual void handleUpdate(float, unsigned int);
    virtual void handleFrameUpdate(float);
    virtual void getUpdateFrequencyType() const;
    virtual void setUpdateFrequencyType(dice::hfe::world::UpdateFreqencyType);
    virtual void handleInput(dice::hfe::io::PlayerInput&, float, unsigned int);
    virtual void getAutoInput(dice::hfe::io::PlayerInput&, bool);
    virtual void getVehicle() const;
    virtual void setVehicle(dice::hfe::world::IObject*, int);
    virtual void getInputId() const;
    virtual void getId() const;
    virtual void setIsRemote(bool);
    virtual void getIsRemote() const;
    virtual void setIsAIPlayer(bool);
    virtual void getIsAIPlayer() const;
    virtual void setIsAlive(bool);
    virtual void getIsAlive() const;
    virtual void setSuicide(bool);
    virtual void getSuicide() const;
    virtual bool getIsConnected() const;
};

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

class BanList {
public:
    void banPlayerKey(int playerId, std::string const& key);
    void addKeyToBanList(std::string const& key, std::string const& reason);
    void alertOnBanned(int playerId, std::string const& reason);
};

void BanList::banPlayerKey(int playerId, std::string const& key)
{
    if (playerId != 0xff)
    {
        IGameServer* gs = 0;
        if (game != 0)
            gs = (IGameServer*)game->queryInterface(IID_IGameServer);
        world::IPlayer* player = world::playerManager->getPlayerFromId(playerId);
        if (player != 0 && player->getIsConnected())
        {
            std::string hash(gcd_getkeyhash(gamespy::g_gameID, playerId));
            addKeyToBanList(hash, key);
            alertOnBanned(playerId, key);
            gs->kickPlayer(playerId, io::PRESULT_KICKED, "");
        }
    }
}

} } // namespace dice::hfe
