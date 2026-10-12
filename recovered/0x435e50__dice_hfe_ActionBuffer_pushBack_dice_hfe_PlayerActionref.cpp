// FUNCTION: BF2 0x435e50
#include <list>

namespace dice { namespace hfe {

class PlayerAction {
public:
    int m_sequence;
    char _pad[21];
    PlayerAction() {}
    PlayerAction(const PlayerAction&);
};

class ActionBuffer : public std::list<PlayerAction> {
public:
    int m_sequence;

    bool pushBack(PlayerAction& action);
};

bool ActionBuffer::pushBack(PlayerAction& action) {
    PlayerAction copy;
    copy = action;
    push_back(copy);
    m_sequence = action.m_sequence;
    return true;
}

} }
