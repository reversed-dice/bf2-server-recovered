// FUNCTION: BF2 0x42b020
namespace dice { namespace hfe {

class LeaveSquadEvent {
public:
    unsigned int getType() const;
};

unsigned int LeaveSquadEvent::getType() const {
    return 0x11;
}

} }
