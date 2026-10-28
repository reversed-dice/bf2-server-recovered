// FUNCTION: BF2 0x4ec100
#include <sstream>
#include <string>

namespace dice { namespace hfe {

class StatusMonitorImpl {
public:
    StatusMonitorImpl();
    virtual ~StatusMonitorImpl();
    static StatusMonitorImpl* createInstance();
};

class BuildNrUtil {
public:
    static const char* getBuildNrString();
};

class StatusMonitor {
public:
    StatusMonitor();
    StatusMonitorImpl* m_impl;
};

} }

std::string g_bfversion;

namespace dice { namespace hfe {

struct SsHolder {
    std::stringstream ss;
    SsHolder() : ss(std::ios_base::in | std::ios_base::out) {}
    ~SsHolder() __attribute__((noinline));
};

SsHolder::~SsHolder() {}

StatusMonitor::StatusMonitor() {
    m_impl = StatusMonitorImpl::createInstance();
    SsHolder h;
    h.ss << "v" << std::string(BuildNrUtil::getBuildNrString());
    h.ss << "(x86_64)";
    g_bfversion = h.ss.str();
}

} }
