// FUNCTION: BF2 0x5ea530
namespace dice { namespace hfe { namespace world {

struct AmmoData {
    unsigned char gap_0x00[0x30];
    unsigned char m_autoReload;
};

class AmmoComp {
    unsigned char gap_0x00[0x80];
    AmmoData* m_ammoData;
public:
    unsigned char getAutoReload() const;
};

unsigned char AmmoComp::getAutoReload() const {
    return m_ammoData->m_autoReload;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getAutoReload_const (0x5ea530)