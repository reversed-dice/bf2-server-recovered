// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x537490
#include <list>
namespace dice { namespace hfe { namespace world {

class IObject {};

class PlayerControlObject {
public:
    void removePlayerInputObject(dice::hfe::world::IObject* o);

    char _pad[0x318];
    std::list<IObject*> m_inputs;
};

void PlayerControlObject::removePlayerInputObject(IObject* o)
{
    std::list<IObject*>::iterator it = m_inputs.begin();
    while (it != m_inputs.end()) {
        if (*it == o) {
            m_inputs.erase(it);
            return;
        }
        ++it;
    }
}

} } }
