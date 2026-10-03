// FUNCTION: BF2 0x605ed0
namespace dice { namespace hfe { namespace world {

class LPTargetComp {
public:
    int getRef();
private:
    unsigned char m_pad[0x80];
    int m_field_80; // offset 0x80
};

int LPTargetComp::getRef() {
    return m_field_80;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetComp_getRef (0x605ed0)