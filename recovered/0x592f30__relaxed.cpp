// FUNCTION: BF2 0x592f30
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    unsigned long long getKitVehicleMods() const;

private:
    char m_pad0[0x28];
    unsigned long long m_kitData; // offset 0x28
};

unsigned long long Kit::getKitVehicleMods() const {
    return m_kitData + 0x3a0ULL;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getKitVehicleMods (0x525080)