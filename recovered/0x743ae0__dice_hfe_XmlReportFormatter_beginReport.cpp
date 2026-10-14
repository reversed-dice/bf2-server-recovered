// FUNCTION: BF2 0x743ae0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <sstream>

namespace dice { namespace hfe {
struct XmlReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
    void beginReport();
};
}}
void dice::hfe::XmlReportFormatter::beginReport()
{
    _os.str("");
    _os << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << std::endl
        << "<Root schema=\"BF2Profiler 1.0\">" << std::endl
        << "<Columns>" << std::endl
        << "<Column name=\"Counter\" attribute=\"name\" align=\"Left\"/>" << std::endl
        << "<Column name=\"Id\" attribute=\"id\" align=\"Right\"/>" << std::endl
        << "<Column name=\"PageFaults\" attribute=\"pageFaults\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Time per Tick (ms)\" attribute=\"timePerTick\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Calls per Tick\" attribute=\"callsPerTick\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Time per Frame\" attribute=\"timePerFrame\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Calls per Frame\" attribute=\"callsPerFrame\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Average time per Call\" attribute=\"timePerCall\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Min Time\" attribute=\"minTime\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Max Time\" attribute=\"maxTime\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Guard Time\" attribute=\"guardTime\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Alloc Memory\" attribute=\"allocatedMemory\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Alloc Memory Increase\" attribute=\"allocatedMemoryIncrease\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Alloc Calls\" attribute=\"allocationCalls\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Alloc Call Inc\" attribute=\"allocationCallIncrease\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Local Percent\" attribute=\"localPercent\" align=\"Right\"/>" << std::endl
        << "<Column name=\"Global Percent\" attribute=\"globalPercent\" align=\"Right\"/>" << std::endl
        << "</Columns>" << std::endl
        << "<Nodes>" << std::endl;
}
