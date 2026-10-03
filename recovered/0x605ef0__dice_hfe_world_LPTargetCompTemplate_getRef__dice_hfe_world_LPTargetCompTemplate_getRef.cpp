// FUNCTION: BF2 0x605ef0
namespace dice { namespace hfe { namespace world {

class LPTargetCompTemplate {
public:
    int getRef();
private:
    unsigned char m_pad[0x58];
    int m_field_58;          // offset 0x58
};

int LPTargetCompTemplate::getRef() {
    return m_field_58;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetCompTemplate_getRef (0x605ef0)