// FUNCTION: BF2 0x40bb60
#include <string>
#include <vector>
namespace dice { namespace hfe {

class ClientInfo {
public:
    ClientInfo();
    std::string m_name;
    std::string m_squadName;
    int m_id;
    int m_team;
    std::string m_kit;
    bool m_ready;
    bool m_alive;
    std::vector<int> m_flags;
};

ClientInfo::ClientInfo()
    : m_name("Player"), m_squadName(""), m_id(0), m_team(-1), m_ready(false), m_alive(true)
{
}

} }
