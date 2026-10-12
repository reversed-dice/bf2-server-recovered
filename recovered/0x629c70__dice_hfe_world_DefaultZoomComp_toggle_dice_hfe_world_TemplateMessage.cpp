// BF2_FLAGS: -fno-guess-branch-probability
// FUNCTION: BF2 0x629c70
#include <vector>

namespace dice { namespace hfe { namespace world {

struct ZoomLevelSet {
    char _pad0x20[0x20];
    std::vector<int> levels;
};

class DefaultZoomComp {
public:
    char _pad0x34[0x34];
    int m_current;
    char _pad0x38[0x10];
    ZoomLevelSet* m_levels;
    void changeZoom(int zoom, bool force);
    void toggle(int msg);
};

void DefaultZoomComp::toggle(int msg)
{
    if (msg != 7)
        return;
    if (m_levels->levels.size() <= 1)
        return;
    for (unsigned int i = 0; i < m_levels->levels.size(); ++i) {
        if ((int)i == m_current) {
            if (m_levels->levels.size() > i + 1)
                changeZoom((int)(i + 1), false);
            else
                changeZoom(0, false);
            ++i;
        }
    }
}

} } }
