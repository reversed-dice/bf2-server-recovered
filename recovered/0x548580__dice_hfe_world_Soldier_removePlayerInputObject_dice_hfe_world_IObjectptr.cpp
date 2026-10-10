// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x548580
#include <list>
namespace dice { namespace hfe { namespace world {

class IObject {};

class Soldier {
public:
    void removePlayerInputObject(dice::hfe::world::IObject* o);

    char _pad[0x360];
    std::list<IObject*> m_inputs;
};

void Soldier::removePlayerInputObject(IObject* o)
{
    for (std::list<IObject*>::iterator it = m_inputs.begin(); it != m_inputs.end(); ++it) {
        if (*it == o) {
            m_inputs.erase(it);
            return;
        }
    }
}

} } }
