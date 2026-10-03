// FUNCTION: BF2 0x467660
#include <string>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    const std::string& getConfigFile() const;

private:
    std::string m_configFile; // offset 0x00
};

const std::string& ReservedSlots::getConfigFile() const {
    return m_configFile;
}

} }
// REVERSED_FUNCTION: dice_hfe_ReservedSlots_getConfigFile_const (0x467660)