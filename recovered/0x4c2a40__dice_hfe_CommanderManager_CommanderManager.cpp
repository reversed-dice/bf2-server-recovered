// FUNCTION: BF2 0x4c2a40
#include <map>

namespace dice { namespace hfe {

class CommanderManager {
public:
    CommanderManager();
    virtual ~CommanderManager();

    int m_a;
    int m_b;
    std::map<int, int> m_map;
    void* m_p;
};

} }

dice::hfe::CommanderManager::CommanderManager()
    : m_a(-1), m_b(-1), m_p(0)
{
}
