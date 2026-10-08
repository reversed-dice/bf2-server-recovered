// FUNCTION: BF2 0x5c3f50
#include <vector>
namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    char _pad[0x68];
    std::vector<int> m_showOnCamMode;
    int getShowOnCamMode(int mode);
};
int WeaponHudCompTemplate::getShowOnCamMode(int mode) {
    for (int i = 0; i < (int)m_showOnCamMode.size(); ++i) {
        if (m_showOnCamMode[i] == mode) return 1;
    }
    return 0;
}
} } }
