// FUNCTION: BF2 0x42e3c0
namespace dice { namespace hfe {

class RemoveSpawnGroupEvent {
public:
    unsigned int getType() const;
};

unsigned int RemoveSpawnGroupEvent::getType() const { return 0x3a; }

} }
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_getType_const (0x42e3c0)