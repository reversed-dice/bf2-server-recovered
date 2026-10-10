// FUNCTION: BF2 0x55c950
#include <map>
namespace dice { namespace hfe { namespace world {
class SupplyDropManager {
public:
    virtual ~SupplyDropManager();
    bool removeCrate(int id);
    std::map<int, float> m_crates;
};
bool SupplyDropManager::removeCrate(int id)
{
    std::map<int, float>::iterator it = m_crates.find(id);
    if (it == m_crates.end())
        return false;
    m_crates.erase(it);
    return true;
}
} } }
