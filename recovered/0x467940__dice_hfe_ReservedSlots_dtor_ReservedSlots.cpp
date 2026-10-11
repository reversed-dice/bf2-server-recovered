// FUNCTION: BF2 0x467940
// dice_hfe_ReservedSlots_dtor_ReservedSlots
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    ~ReservedSlots();

private:
    std::string m_configFile;              // 0x00
    std::vector<std::string> m_slots;      // 0x08
};

ReservedSlots::~ReservedSlots() {}

} }
