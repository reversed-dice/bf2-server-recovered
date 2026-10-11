// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x781a00
#include <vector>
#include <map>

namespace dice { namespace hfe {
namespace ai {
class IAIObject;
class IWeapon;

class IAIObjectArmament {
public:
    IAIObjectArmament(IAIObject*);
    virtual ~IAIObjectArmament();
    IAIObject* m_owner;
};

class AIObjectArmament : public IAIObjectArmament {
public:
    AIObjectArmament(IAIObject*, void*);
    virtual ~AIObjectArmament();
    virtual void getId() const;
    virtual void createInformationPlugIn(unsigned int, bool);
    virtual void init();
    virtual void update();
    std::vector<IWeapon*> m_weapons;
    char _pad0x28[8];
    void* m_0x30;
    int m_0x38;
    std::map<int, int> m_map;
};

AIObjectArmament::AIObjectArmament(IAIObject* owner, void* b)
  : IAIObjectArmament(owner), m_0x30(b), m_0x38(0) {
    m_weapons.resize(8);
    for (unsigned int i = 0; i < m_weapons.size(); ++i) {
        m_weapons[i] = 0;
    }
}

} } }
