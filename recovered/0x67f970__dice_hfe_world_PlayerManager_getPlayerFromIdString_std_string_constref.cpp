// FUNCTION: BF2 0x67f970
#include <string>
#include <cstdlib>
extern "C" long __strtol_internal(const char*, char**, int, int);

namespace dice { namespace hfe { namespace world {

namespace { bool isUint(const std::string& s); }

class Player;

class PlayerManager {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6();
    virtual Player* getPlayerFromName(const std::string& name);
    virtual Player* getPlayerFromId(int id);
    Player* getPlayerFromIdString(const std::string& s);
};

Player* PlayerManager::getPlayerFromIdString(const std::string& s) {
    Player* p = getPlayerFromName(s);
    if (p != 0) return p;
    if (!isUint(s)) return 0;
    return getPlayerFromId(__strtol_internal(s.c_str(), 0, 10, 0));
}

} } }
