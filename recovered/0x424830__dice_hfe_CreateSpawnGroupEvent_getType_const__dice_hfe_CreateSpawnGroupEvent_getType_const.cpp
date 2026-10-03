// FUNCTION: BF2 0x424830
namespace dice { namespace hfe {
class CreateSpawnGroupEvent {
public:
    unsigned int getType() const;
};
unsigned int CreateSpawnGroupEvent::getType() const { return 0x39; }
} }
// REVERSED_FUNCTION: dice_hfe_CreateSpawnGroupEvent_getType_const (0x424830)