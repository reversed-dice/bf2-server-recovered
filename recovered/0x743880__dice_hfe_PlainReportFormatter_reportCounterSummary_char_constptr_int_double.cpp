// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x743880
#include <string>
#include <sstream>

namespace dice { namespace hfe {
std::string formatString(char const*, ...);
struct PlainReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
    char _mid[0x160 - sizeof(std::ostringstream)];
    int m_depth;
    void reportCounterSummary(char const* name, int id, double value);
};
}}
void dice::hfe::PlainReportFormatter::reportCounterSummary(char const* name, int id, double value)
{
    std::string indent;
    for (int i = 0; i < m_depth - 1; i++)
        indent.append("| ", 2);
    _os << (dice::hfe::formatString("%-3d ", id)) << indent << (dice::hfe::formatString("%-35s                %3.2f%% (sum)\n", name, value)) << std::endl;
}
