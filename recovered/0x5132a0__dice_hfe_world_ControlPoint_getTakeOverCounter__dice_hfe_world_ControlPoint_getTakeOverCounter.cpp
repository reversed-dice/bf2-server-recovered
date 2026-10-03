// FUNCTION: BF2 0x5132a0
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    float getTakeOverCounter() const;
private:
    char m_pad0[0x25C];
    float m_takeOverCounter;
};

float ControlPoint::getTakeOverCounter() const {
    return m_takeOverCounter;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPoint_getTakeOverCounter (0x5132a0)