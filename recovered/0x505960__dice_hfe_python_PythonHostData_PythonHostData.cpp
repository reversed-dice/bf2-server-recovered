// FUNCTION: BF2 0x505960
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <vector>
namespace dice { namespace hfe { namespace python {

class PythonHostData {
public:
    PythonHostData();
    bool m_initialized;
    bool m_running;
    void* m_module;
    void* m_dict;
    void* m_host;
    void* m_callbacks;
    std::list<int> m_handlers;
    std::map<int, int> m_hooks;
    std::list<int> m_pending;
    std::vector<int> m_args;
    void* m_90;
    std::list<int> m_timers;
    void* m_a8;
    void* m_b0;
    void* m_b8;
    void* m_c0;
    bool m_c8;
};

PythonHostData::PythonHostData()
    : m_initialized(false), m_running(false), m_module(0), m_dict(0), m_host(0), m_callbacks(0),
      m_90(0), m_a8(0), m_b0(0), m_b8(0), m_c0(0), m_c8(false)
{
}

} } }
