// FUNCTION: BF2 0x5219a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getListenerObstruction() const;
};

float PlayerControlObjectTemplate::getListenerObstruction() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const unsigned char*>(this) + 0x3bc);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate::getListenerObstruction_const (0x5219a0)