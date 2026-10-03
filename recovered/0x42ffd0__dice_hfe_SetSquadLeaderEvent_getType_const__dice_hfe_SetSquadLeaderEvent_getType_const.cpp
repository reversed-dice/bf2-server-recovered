// FUNCTION: BF2 0x42ffd0
namespace dice { namespace hfe {

class SetSquadLeaderEvent {
public:
    unsigned int getType() const;
};

unsigned int SetSquadLeaderEvent::getType() const {
    return 0x1c;
}

} }
