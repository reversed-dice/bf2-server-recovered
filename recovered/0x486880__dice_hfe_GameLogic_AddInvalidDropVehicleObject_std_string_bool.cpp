// FUNCTION: BF2 0x486880
#include <string>
#include <list>

namespace dice {
namespace hfe {

struct DropVehicleEntry {
    std::string name;
    bool flag;
    DropVehicleEntry(std::string _name, bool _flag) : name(_name), flag(_flag) {}
};

class GameLogic {
public:
    char pad[0x3b0];
    std::list<DropVehicleEntry> m_invalidDropVehicleObjects;

    void AddInvalidDropVehicleObject(std::string name, bool flag);
};

void GameLogic::AddInvalidDropVehicleObject(std::string name, bool flag)
{
    m_invalidDropVehicleObjects.push_back(DropVehicleEntry(name, flag));
}

} // namespace hfe
} // namespace dice
