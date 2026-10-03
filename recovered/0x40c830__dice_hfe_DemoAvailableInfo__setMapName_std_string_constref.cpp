// FUNCTION: BF2 0x40c830
#include <string>

namespace dice { namespace hfe {

class DemoAvailableInfo {
public:
    void setMapName(const std::string& name);

    void* m_vtable;         // +0x0
    std::string m_mapName;  // +0x8
    unsigned char m_unk_0x10; // +0x10
};

void DemoAvailableInfo::setMapName(const std::string& name) {
    m_mapName.assign(name);
    m_unk_0x10 = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo::setMapName_std_string_constref (0x40c830)