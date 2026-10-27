// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x528cb0
#include <map>
#include <string>

namespace dice { namespace hfe { namespace world {
class IObject;
void setGeometry(IObject*, std::string const&);

class KitPart {
public:
    char pad0[0x28];
    void* m_pOwner;
    char pad1[0x250 - 0x30];
    int m_team;
    void setTeam(int team);
};

void KitPart::setTeam(int team) {
    void* owner = m_pOwner;
    m_team = team;
    std::map<int, std::string>& geoms = *(std::map<int, std::string>*)((char*)owner + 0x1f8);
    std::map<int, std::string>::iterator it = geoms.find(team);
    if (__builtin_expect(it == geoms.end(), 0)) {
        geoms.find(0);
        return;
    }
    setGeometry((IObject*)this, it->second);
}
}}}
