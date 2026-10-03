// FUNCTION: BF2 0x41f330
namespace dice { namespace hfe {
class ArtilleryEvent {
public:
    unsigned int getType() const;
};
unsigned int ArtilleryEvent::getType() const { return 0x1e; }
} }
// REVERSED_FUNCTION: dice_hfe_ArtilleryEvent_getType_const (0x41f330)