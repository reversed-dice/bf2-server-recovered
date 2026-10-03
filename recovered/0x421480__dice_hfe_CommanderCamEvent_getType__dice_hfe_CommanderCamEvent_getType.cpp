// FUNCTION: BF2 0x421480
namespace dice {
namespace hfe {

class CommanderCamEvent {
public:
    unsigned int getType() const;
};

unsigned int CommanderCamEvent::getType() const {
    return 0x24;
}

}
}
// REVERSED_FUNCTION: dice_hfe_CommanderCamEvent_getType_const (0x421480)
