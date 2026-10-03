// FUNCTION: BF2 0x4352e0
namespace dice { namespace hfe {

class VoipOnOffEvent {
public:
    unsigned int getType() const;
};

unsigned int VoipOnOffEvent::getType() const {
    return 0x23;
}

} }
