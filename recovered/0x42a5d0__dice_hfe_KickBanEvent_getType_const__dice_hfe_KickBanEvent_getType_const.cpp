// FUNCTION: BF2 0x42a5d0
namespace dice { namespace hfe {

class KickBanEvent {
public:
    unsigned int getType() const;
};

unsigned int KickBanEvent::getType() const {
    return 0x37;
}

} }
// REVERSED_FUNCTION: dice_hfe_KickBanEvent_getType_const (0x42a5d0)