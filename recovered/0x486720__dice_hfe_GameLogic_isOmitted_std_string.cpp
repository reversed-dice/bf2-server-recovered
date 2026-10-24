// FUNCTION: BF2 0x486720
#include <string>
#include <list>

namespace dice { namespace hfe {

std::string getLowerCase(std::string const& name);

class GameLogic {
public:
    bool isOmitted(std::string name);
};

} }

bool dice::hfe::GameLogic::isOmitted(std::string name) {
    name.assign(dice::hfe::getLowerCase(name));
    std::list<std::string>* omitted = (std::list<std::string>*)((char*)this + 0x300);
    for (std::list<std::string>::iterator it = omitted->begin(); it != omitted->end(); ++it) {
        std::string entry = *it;
        if (name == entry) {
            return true;
        }
    }
    return false;
}
