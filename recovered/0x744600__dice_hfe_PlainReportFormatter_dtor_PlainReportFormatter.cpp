// FUNCTION: BF2 0x744600
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>

namespace dice { namespace hfe {

class ReportFormatter {
public:
    virtual ~ReportFormatter() {}
};

class PlainReportFormatter : public ReportFormatter {
public:
    std::stringstream _os;
    virtual ~PlainReportFormatter();
};

PlainReportFormatter::~PlainReportFormatter() {}

} }
