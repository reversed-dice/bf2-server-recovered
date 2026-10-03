// FUNCTION: BF2 0x60fd00
namespace dice { namespace hfe { namespace world {

class WeaponBasedRecoilComp {
public:
    int getRef();
private:
    unsigned char m_pad[0x80];
    int m_refCount;
};

int WeaponBasedRecoilComp::getRef() {
    return m_refCount;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_WeaponBasedRecoilComp_getRef (0x60fd00)