// FUNCTION: BF2 0x4206f0
namespace dice { namespace hfe {

class ChangePlayerNameEvent {
public:
    unsigned int getType() const;
};

unsigned int ChangePlayerNameEvent::getType() const {
    return 0xc;
}

} }
