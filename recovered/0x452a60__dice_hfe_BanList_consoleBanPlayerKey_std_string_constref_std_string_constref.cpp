// FUNCTION: BF2 0x452a60
#include <string>

namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20();
    virtual int getId() const;                       // +0xa8
};

class IPlayerManager {
public:
    virtual void e00(); virtual void e01(); virtual void e02(); virtual void e03();
    virtual void e04(); virtual void e05(); virtual void e06(); virtual void e07();
    virtual void e08(); virtual void e09(); virtual void e10();
    virtual IPlayer* getPlayerFromIdString(std::string const&);  // +0x58
};

extern IPlayerManager* playerManager;

} } }

namespace dice { namespace hfe {

class BanList {
public:
    std::string consoleBanPlayerKey(std::string const& a, std::string const& b);
    void banPlayerKey(int, std::string const&);
    void banPlayer(int, std::string const&);
    void storeBanList();
};

std::string BanList::consoleBanPlayerKey(std::string const& a, std::string const& b) {
    dice::hfe::world::IPlayer* p = dice::hfe::world::playerManager->getPlayerFromIdString(a);
    if (!p)
        return std::string("Player not found.");
    banPlayerKey(p->getId(), b);
    storeBanList();
    return std::string("");
}

} }
