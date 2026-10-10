// FUNCTION: BF2 0x49fce0
#include <map>

namespace dice {
namespace hfe {

struct PlayerMapSlot { char pad0[8]; char body[40]; };

class Player {
public:
    char pad[0x340];
    PlayerMapSlot slots[8];
    int getChosenUnlockLevel(int key, int idx) const;
};

int Player::getChosenUnlockLevel(int key, int idx) const {
    std::map<int, int>* m = (std::map<int, int>*)slots[idx].body;
    std::map<int, int>::iterator it = m->find(key);
    if (it == m->end()) return 0;
    return it->second;
}

} // namespace hfe
} // namespace dice
