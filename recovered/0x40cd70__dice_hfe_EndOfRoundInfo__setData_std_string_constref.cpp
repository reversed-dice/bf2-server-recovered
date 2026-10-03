// FUNCTION: BF2 0x40cd70
#include <string>

namespace dice { namespace hfe {
class EndOfRoundInfo {
public:
    std::string m_data;
    int field_08;
    unsigned char m_dirty;
    unsigned char m_hasDelay;
    void* m_unk_0x10;
    void* m_unk_0x18;

    void setData(const std::string& str);
};
void EndOfRoundInfo::setData(const std::string& str) {
    m_data.assign(str);
    m_dirty = 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo::setData_std_string_constref (0x40cd70)