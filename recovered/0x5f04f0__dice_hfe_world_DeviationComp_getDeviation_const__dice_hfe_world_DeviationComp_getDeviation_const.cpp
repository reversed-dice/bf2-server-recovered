// FUNCTION: BF2 0x5f04f0
namespace dice { namespace hfe { namespace world {

class DeviationComp {
public:
    unsigned char m_pad[0x28];  // padding to offset 0x28
    int m_field_28;             // offset 0x28

    float getDeviation() const;
};

float DeviationComp::getDeviation() const {
    return *reinterpret_cast<const float*>(&m_field_28);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DeviationComp_getDeviation_const (0x5f04f0)