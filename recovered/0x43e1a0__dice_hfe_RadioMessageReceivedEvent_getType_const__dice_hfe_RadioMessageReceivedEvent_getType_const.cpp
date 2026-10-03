// FUNCTION: BF2 0x43e1a0
namespace dice { namespace hfe {

class RadioMessageReceivedEvent {
public:
    unsigned int getType() const;
};

unsigned int RadioMessageReceivedEvent::getType() const {
    return 0xd;
}

} }
