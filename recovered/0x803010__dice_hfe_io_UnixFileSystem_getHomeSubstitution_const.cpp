// FUNCTION: BF2 0x803010
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class Debug {
public:
    Debug(int type, std::string const& file, int line, std::string const& tag);
    ~Debug();
    char m_pad[0x20];
    std::ostream os;
    char m_tail[0x48];
};

namespace io {

class UnixFileSystem {
public:
    std::string const& getHomeSubstitution() const;
};

std::string const& UnixFileSystem::getHomeSubstitution() const {
    Debug(6, std::string("IO/File/UnixFileSystem.cpp"), 435, std::string("")).os
        << "dep: dedicated servers aren't allowed to write to @HOME@";
    static std::string hd("/tmp");
    return hd;
}

} } }
