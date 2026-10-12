// FUNCTION: BF2 0x436120
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

    PlayerAction* add(const PlayerAction& action);
};

PlayerAction* ActionBuffer::add(const PlayerAction& action) {
    PlayerAction copy;
    copy = action;
    copy.m_sequence = m_sequence++;
    push_back(copy);
    return &back();
}

} }
