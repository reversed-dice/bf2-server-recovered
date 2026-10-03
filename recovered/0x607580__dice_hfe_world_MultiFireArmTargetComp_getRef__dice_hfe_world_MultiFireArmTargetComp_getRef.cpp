// FUNCTION: BF2 0x607580
namespace dice { namespace hfe { namespace world {

class MultiFireArmTargetComp {
    unsigned char gap[0x80];
    int m_refCount;

public:
    int getRef();
};

int MultiFireArmTargetComp::getRef() {
    return m_refCount;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireArmTargetComp_getRef (0x607580)