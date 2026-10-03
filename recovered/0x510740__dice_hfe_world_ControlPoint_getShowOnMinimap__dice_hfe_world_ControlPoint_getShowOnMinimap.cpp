// FUNCTION: BF2 0x510740
namespace dice { namespace hfe { namespace world {

struct MinimapInfo {
    unsigned char _pad0[0x244];
    bool m_showOnMinimap;
};

class ControlPoint {
public:
    bool getShowOnMinimap() const;
private:
    unsigned char _pad0[0x248];
    MinimapInfo* m_minimapInfo;
};

bool ControlPoint::getShowOnMinimap() const {
    return m_minimapInfo->m_showOnMinimap;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPoint_getShowOnMinimap (0x510740)