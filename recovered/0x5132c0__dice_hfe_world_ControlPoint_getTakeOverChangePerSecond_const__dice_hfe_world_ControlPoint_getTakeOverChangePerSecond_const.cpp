// FUNCTION: BF2 0x5132c0
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    float getTakeOverChangePerSecond() const;
};

float ControlPoint::getTakeOverChangePerSecond() const {
    // offset 0x254
    return *(const float*)((const char*)this + 0x254);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPoint_getTakeOverChangePerSecond_const (0x5132c0)