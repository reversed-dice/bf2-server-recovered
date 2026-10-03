// FUNCTION: BF2 0x42a150
namespace dice { namespace hfe {

class JoinSquadEvent {
public:
    unsigned int getType() const;
};

unsigned int JoinSquadEvent::getType() const {
    return 0x10;
}

} }
