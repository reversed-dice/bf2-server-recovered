// FUNCTION: BF2 0x744b60
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>

namespace dice { namespace hfe {

class ReportFormatter {
public:
    virtual ~ReportFormatter() {}
};

class XmlReportFormatter : public ReportFormatter {
public:
    std::stringstream _os;
    virtual ~XmlReportFormatter();
};

XmlReportFormatter::~XmlReportFormatter() {}

} }
