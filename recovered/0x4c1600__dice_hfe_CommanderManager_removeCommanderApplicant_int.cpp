// FUNCTION: BF2 0x4c1600
#include <set>

namespace dice { namespace hfe {

class CommanderManager {
public:
    bool removeCommanderApplicant(int id);

    unsigned char m_pad[0x10];
    std::set<int> m_applicants;     // 0x10
};

bool CommanderManager::removeCommanderApplicant(int id)
{
    std::set<int>::iterator it = m_applicants.find(id);
    bool found = (it != m_applicants.end());
    m_applicants.erase(id);
    return found;
}

} }
