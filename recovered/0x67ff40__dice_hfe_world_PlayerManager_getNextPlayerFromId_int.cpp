// FUNCTION: BF2 0x67ff40
// BF2_FLAGS: -fcrossjumping
#include <map>
#include <iterator>

namespace dice { namespace hfe { namespace world {

class IPlayer {};

struct PlayerManager {
    char _pad[0x90];
    std::map<int, IPlayer*> m_players;
};

IPlayer* getNextPlayerFromId(PlayerManager* self, int id) {
    std::map<int, IPlayer*>& tree = self->m_players;
    std::map<int, IPlayer*>::iterator it = tree.find(id);
    if (it == tree.end()) return (IPlayer*)0;
    ++it;
    if (it != tree.end()) return it->second;
    if (tree.empty()) return (IPlayer*)0;
    return tree.begin()->second;
}

}}}
