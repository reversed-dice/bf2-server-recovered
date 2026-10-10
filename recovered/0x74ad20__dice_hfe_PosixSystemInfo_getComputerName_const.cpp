// FUNCTION: BF2 0x74ad20
#include <string>
#include <string.h>
#include <unistd.h>
namespace dice { namespace hfe {

class SystemInfo {
public:
    virtual void release();
};

class PosixSystemInfo : public SystemInfo {
public:
    std::string m_name;     // +0x8
    std::string& getComputerName();
};

std::string& PosixSystemInfo::getComputerName()
{
    if (!m_name.empty())
        return m_name;

    char buf[255];
    if (gethostname(buf, 255) == 0) {
        buf[254] = 0;
        m_name.assign(buf, strlen(buf));
    } else {
        m_name.assign("unknown", 7);
    }
    return m_name;
}

} }
