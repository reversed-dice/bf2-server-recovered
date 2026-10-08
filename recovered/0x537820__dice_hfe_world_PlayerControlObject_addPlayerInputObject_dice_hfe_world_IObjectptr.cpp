// FUNCTION: BF2 0x537820
// BF2_FLAGS: -fcrossjumping
#include <list>
namespace dice { namespace hfe { namespace world {
class IObject;
class PlayerControlObject {
public:
    void addPlayerInputObject(IObject* o);
private:
    char m_pad[0x318];
    std::list<IObject*> m_list;
};
void PlayerControlObject::addPlayerInputObject(IObject* o) {
    for (std::list<IObject*>::iterator it = m_list.begin(); it != m_list.end(); ++it) {
        if (*it == o)
            return;
    }
    m_list.push_back(o);
}
} } }
