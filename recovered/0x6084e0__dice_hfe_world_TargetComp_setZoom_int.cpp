// FUNCTION: BF2 0x6084e0
namespace dice { namespace hfe { namespace world {

class TargetComp {
public:
    void setZoom(int zoom);
};

void TargetComp::setZoom(int zoom) {
    *((unsigned char*)this + 0x70) = (zoom > 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_setZoom_int (0x6084e0)
