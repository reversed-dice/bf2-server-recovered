// FUNCTION: BF2 0x7432e0
#include <string>
#include <ostream>

// dice::hfe::PlainReportFormatter::infoNode(const std::string&, const std::string&) -- 0x7432e0
//
// Writes the label into the formatter's own stream at +0x18, appends
// ": <value>" when the value is not empty, then endl.

extern char DAT_00b3a117;

extern "C" void infoNode_7432e0(char* self, const std::string& label, const std::string& value)
{
    std::ostream& os = *(std::ostream*)(self + 0x18);
    os << label;
    if (value.size() != 0) os << &DAT_00b3a117 << value;
    os << std::endl;
}
// REVERSED_FUNCTION: dice_hfe_PlainReportFormatter_infoNode_std_string_constref_std_string_constref (0x7432e0)
