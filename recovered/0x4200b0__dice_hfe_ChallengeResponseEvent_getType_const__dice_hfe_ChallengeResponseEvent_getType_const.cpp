// FUNCTION: BF2 0x4200b0
namespace dice { namespace hfe {

class ChallengeResponseEvent {
public:
    unsigned int getType() const;
};

unsigned int ChallengeResponseEvent::getType() const {
    return 2;
}

} }
