// FUNCTION: BF2 0x5ec2e0
namespace dice { namespace hfe { namespace world {

class AmmoComp {
public:
    unsigned char __pad[0x68];  // offset 0x00-0x67
    int m_field_68;             // offset 0x68

    int getReloadState() const;
};

int AmmoComp::getReloadState() const {
    return m_field_68;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getReloadState_const (0x5ec2e0)