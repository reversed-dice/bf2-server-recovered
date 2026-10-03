// FUNCTION: BF2 0x435dd0
#include <stdint.h>

namespace dice { namespace hfe {

class GameEvent {
public:
    ~GameEvent();
};

class ServerVoteManager;

class VoteEvent : public GameEvent {
public:
    virtual ~VoteEvent();

    unsigned int executeClient();
    static ServerVoteManager* getInstance();
    void receiveVote(int param, const VoteEvent& event);
    uint64_t getType() const;

    unsigned char __pad_00[0x25];
    unsigned char m_voteCaster;
};

VoteEvent::~VoteEvent() {
}

} }
// REVERSED_FUNCTION: dice_hfe_VoteEvent_dtor_VoteEvent (0x435dd0)