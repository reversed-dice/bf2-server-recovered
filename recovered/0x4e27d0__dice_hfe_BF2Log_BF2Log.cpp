// FUNCTION: BF2 0x4e27d0
#include <string>
namespace dice { namespace hfe {

namespace memory { void register_err_callback(void (*cb)(bool, const char*)); }
void memoryDebugCallback(bool fatal, const char* msg);

class BF2Log {
public:
    BF2Log();
    virtual ~BF2Log();
    bool m_toFile;
    bool m_toConsole;
    bool m_initializing;
    bool m_verbose;
    std::string m_prefix;
    std::string m_fileName;
    std::string m_path;
    std::string m_buffer;
    void* m_file;
    void* m_console;
};

BF2Log::BF2Log()
    : m_toFile(false), m_toConsole(false), m_initializing(true), m_verbose(false), m_prefix(""),
      m_file(0), m_console(0)
{
    memory::register_err_callback(memoryDebugCallback);
    m_initializing = false;
}

BF2Log::~BF2Log() {}

} }
