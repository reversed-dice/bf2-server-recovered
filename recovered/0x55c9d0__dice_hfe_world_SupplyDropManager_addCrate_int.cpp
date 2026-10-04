// FUNCTION: BF2 0x55c9d0
#include <map>
namespace dice { namespace hfe {
class ISystem {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual double getTime();
};
extern ISystem* g_system;
namespace world {
class SupplyDropManager {
public:
    virtual ~SupplyDropManager();
    bool addCrate(int id);
    std::map<int, float> m_crates;
};
bool SupplyDropManager::addCrate(int id)
{
    if (m_crates.find(id) != m_crates.end())
        return false;
    m_crates.insert(std::pair<const int, float>(id, (float)g_system->getTime()));
    return true;
}
} } }
