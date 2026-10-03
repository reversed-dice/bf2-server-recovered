// FUNCTION: BF2 0x546450
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    unsigned long long getKitVehicleMods() const;

private:
    char m_pad0[0x258];
    unsigned long long m_kitData; // offset 0x258
};

unsigned long long Kit::getKitVehicleMods() const {
    return m_kitData + 0x214ULL;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getKitVehicleMods (0x525080)