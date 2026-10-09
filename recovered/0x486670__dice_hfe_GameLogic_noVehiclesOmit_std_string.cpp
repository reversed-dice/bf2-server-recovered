// FUNCTION: BF2 0x486670
#include <string>
#include <list>

namespace dice { namespace hfe {

std::string getLowerCase(std::string const& name);

class GameLogic {
public:
    void noVehiclesOmit(std::string name);
};

} }

void dice::hfe::GameLogic::noVehiclesOmit(std::string name) {
    name.assign(dice::hfe::getLowerCase(name));
    ((std::list<std::string>*)((char*)this + 0x300))->push_back(name);
}
