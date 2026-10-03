// FUNCTION: BF2 0x42bc60
namespace dice { namespace hfe {

class MissileInitEvent {
public:
    unsigned int getType() const;
};

unsigned int MissileInitEvent::getType() const { return 0x2b; }

} }
// REVERSED_FUNCTION: dice_hfe_MissileInitEvent_getType_const (0x42bc60)