// FUNCTION: BF2 0x40c830
#include <string>

namespace dice { namespace hfe {

class DemoAvailableInfo {
    char _pad[8];
public:
    std::string m_mapName;
    unsigned char m_unk_0x10;

    void setMapName(const std::string& name);
};

void DemoAvailableInfo::setMapName(const std::string& name) {
    m_mapName.assign(name);
    m_unk_0x10 = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_setMapName_std_string_constref (0x40c830)