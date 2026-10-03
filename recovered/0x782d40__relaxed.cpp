// FUNCTION: BF2 0x782d40
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    unsigned long long getKitVehicleMods() const;

private:
    char m_pad0[0x10];
    unsigned long long m_kitData; // offset 0x10
};

unsigned long long Kit::getKitVehicleMods() const {
    return m_kitData + 0xacULL;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getKitVehicleMods (0x525080)