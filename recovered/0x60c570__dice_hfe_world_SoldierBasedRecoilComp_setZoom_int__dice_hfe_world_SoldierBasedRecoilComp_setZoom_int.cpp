// FUNCTION: BF2 0x60c570
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    void setZoom_int(int zoom);
private:
    unsigned char m_pad[0xB0];
    bool m_zoomed;
};

void SoldierBasedRecoilComp::setZoom_int(int zoom) {
    m_zoomed = zoom > 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_setZoom_int (0x60c570)