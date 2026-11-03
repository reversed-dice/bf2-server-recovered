// FUNCTION: BF2 0x742600
#include <string>

namespace dice { namespace hfe {

extern char const* noProfilingDataAvail;

struct TimerCollection {
    char _pad[0x2c];
    int m_count;
};

class Profiler {
public:
    char _pad0[0x10];
    TimerCollection* m_timers;      // +0x10
    char _pad1[0x2260 - 0x18];
    void* m_report;                 // +0x2260
    void* m_reportFull;             // +0x2268
    void* m_reportShort;            // +0x2270

    std::string generateReport(float, unsigned int, bool);
    void reportSummary();
    void reportCounters(float, unsigned int, bool);
    void internalReportPerTimer();
    void reportProcessAndThreads();
};

typedef void (*FnVoid)(void*);
typedef void (*FnSection)(void*, std::string const&, std::string const&);
typedef std::string (*FnString)(void*);

extern "C" void padcall();
extern "C" void pad(int* p) {
    if (p[0] == 0) padcall();
    if (p[1] == 0) padcall();
    if (p[2] == 0) padcall();
    if (p[3] == 0) padcall();
    if (p[4] == 0) padcall();
    if (p[5] == 0) padcall();
    if (p[6] == 0) padcall();
    if (p[7] == 0) padcall();
    if (p[8] == 0) padcall();
}

std::string Profiler::generateReport(float t, unsigned int flags, bool b)
{
    if (b)
        m_report = m_reportFull;
    else
        m_report = m_reportShort;
    if (m_timers->m_count == 0)
        return std::string(noProfilingDataAvail);

    ((FnVoid)(*(void***)m_report)[2])(m_report);
    ((FnSection)(*(void***)m_report)[9])(m_report, "Summary", "");
    reportSummary();
    ((FnVoid)(*(void***)m_report)[10])(m_report);
    ((FnSection)(*(void***)m_report)[9])(m_report, "Profile per Frame", "");
    reportCounters(t, flags, true);
    ((FnVoid)(*(void***)m_report)[10])(m_report);
    ((FnSection)(*(void***)m_report)[9])(m_report, "Report per Timer", "");
    internalReportPerTimer();
    ((FnVoid)(*(void***)m_report)[10])(m_report);
    ((FnSection)(*(void***)m_report)[9])(m_report, "Process and Threads", "");
    reportProcessAndThreads();
    ((FnVoid)(*(void***)m_report)[10])(m_report);
    ((FnVoid)(*(void***)m_report)[3])(m_report);
    return ((FnString)(*(void***)m_report)[14])(m_report);
}

} }
