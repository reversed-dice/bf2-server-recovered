// FUNCTION: BF2 0x676ef0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <set>
#include <vector>

namespace dice { namespace hfe { namespace world { class IPlayer; } } }

namespace dice { namespace hfe {

extern int unlockItems[14];
extern int unlockKits[14];

class ServerGameLogic {
public:
    void setUnlocks(world::IPlayer* player, std::map<int, int>* unlocks);
};

extern ServerGameLogic* gameLogic;

class PlayerUnlocks {
public:
    void setPlayerUnlocks(world::IPlayer* player, std::vector<int>* unlocks);
    char _pad[0x58];
};

void PlayerUnlocks::setPlayerUnlocks(world::IPlayer* player, std::vector<int>* unlocks)
{
    if (!player)
        return;

    std::map<int, int> counts[2];
    std::set<int> owned;
    for (std::vector<int>::iterator it = unlocks->begin(); it != unlocks->end(); ++it)
        owned.insert(*it);

    for (int i = 0; i < 14; ++i) {
        counts[0][unlockKits[i]] = 0;
        counts[1][unlockKits[i]] = 0;
    }

    for (int i = 0; i < 14; ++i) {
        if (owned.find(unlockItems[i]) != owned.end()) {
            ++counts[0][unlockKits[i]];
            ++counts[1][unlockKits[i]];
        }
    }

    gameLogic->setUnlocks(player, counts);
}

} }
