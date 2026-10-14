// FUNCTION: BF2 0x4e2840
#include <string>

namespace dice { namespace hfe {

namespace io {
class File {
public:
    void close();
    ~File();
};
}

enum DebugType { DT_DUMMY };

void setDebugCallback(DebugType type, void (*cb)(DebugType, std::string const&, std::string const&, int, std::string const&, std::string const&, std::string const&, void*), void* instance);

namespace memory {
void register_err_callback(void (*cb)(bool, char const*));
}

class BF2Log {
public:
    virtual ~BF2Log();
    virtual void initDebugCallback();
    char _pad[8];
    std::string m_10;
    std::string m_18;
    std::string m_20;
    std::string m_28;
    io::File* m_p30;
    io::File* m_p38;
};

} }

dice::hfe::BF2Log::~BF2Log()
{
    if (m_p30)
    {
        m_p30->close();
        delete m_p30;
    }
    if (m_p38)
    {
        m_p38->close();
        delete m_p38;
    }
    dice::hfe::memory::register_err_callback(0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)0, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)2, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)3, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)5, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)1, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)6, 0, 0);
    dice::hfe::setDebugCallback((dice::hfe::DebugType)8, 0, 0);
}
