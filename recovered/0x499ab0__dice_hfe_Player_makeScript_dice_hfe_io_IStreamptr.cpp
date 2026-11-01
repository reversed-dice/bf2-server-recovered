// FUNCTION: BF2 0x499ab0
// dice::hfe::Player::makeScript(dice::hfe::io::IStream*)
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual unsigned int write(void const* buf, unsigned int size);
};
} } }

namespace dice { namespace hfe {

template <class T> class Flag32Bits;

namespace world {

class IPlayer;

extern Flag32Bits<IPlayer> PFIsAi;
extern Flag32Bits<IPlayer> PFIsNetwork;

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
    virtual IPlayer* getNextPlayerFromId(int);
    virtual IPlayer* getPlayerFromProfileId(int);
    virtual IPlayer* getPlayerFromIdString(std::string const&);
    virtual IPlayer* getLocalHumanPlayer();
    virtual void setLocalHumanPlayer(IPlayer*);
    virtual void setLocalHumanPlayer(int);
    virtual void getPlayers();
    virtual void getPlayersSortedByScore();
    virtual void getPlayersSortedByRank();
    virtual void getPlayers(int);
    virtual void getPlayersSortedByScore(int);
    virtual void getPlayersSortedByRank(int);
    virtual void getPlayersInSquad(int, int);
    virtual void getPlayersInSquadSortedByScore(int, int);
    virtual void getPlayersInSquadSortedByRank(int, int);
    virtual void getTeamSquadLeaders(int);
    virtual void updatePlayers(float);
    virtual void registerPlayerClass(unsigned int, std::string const&);
    virtual void getPlayerClasses(void*);
    virtual const std::string& getClassNameFromPlayerClassID(unsigned int) const;
};

extern PlayerManager* playerManager;

} } }

namespace dice { namespace hfe {

class Player {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual unsigned int getClassID() const;
    virtual ~Player();
    virtual void getWeakPtr();
    virtual void setName(std::string const&);
    virtual const std::string& getName() const;
    virtual void setFlags(dice::hfe::Flag32Bits<dice::hfe::world::IPlayer> const&);
    virtual bool testFlags(dice::hfe::Flag32Bits<dice::hfe::world::IPlayer> const&) const;
    char _pad[0x670];
    bool makeScript(dice::hfe::io::IStream* stream);
};

bool Player::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    ss << "Player.create " << dice::hfe::world::playerManager->getClassNameFromPlayerClassID(getClassID()) << " " << getName() << std::endl;
    if (testFlags(dice::hfe::world::PFIsAi))
        ss << "Player.isAi " << testFlags(dice::hfe::world::PFIsAi) << std::endl;
    if (testFlags(dice::hfe::world::PFIsNetwork))
        ss << "Player.isNetwork " << testFlags(dice::hfe::world::PFIsNetwork) << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.size()) == s.size();
}

} }
