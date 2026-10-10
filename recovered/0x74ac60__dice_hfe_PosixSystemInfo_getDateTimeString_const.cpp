// FUNCTION: BF2 0x74ac60
#include <string>
#include <ctime>
namespace dice { namespace hfe {
class PosixSystemInfo {
public:
    std::string getDateTimeString() const;
};
std::string PosixSystemInfo::getDateTimeString() const
{
    time_t t = time(0);
    struct tm* lt = localtime(&t);
    char buf[0x50];
    strftime(buf, 0x4f, "%Y-%m-%d %H:%M:%S", lt);
    return std::string(buf);
}
}}
