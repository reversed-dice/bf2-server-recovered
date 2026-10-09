// FUNCTION: BF2 0x68ce90
// BF2_FLAGS: -fcrossjumping
#include <list>
#include <iterator>
namespace dice { namespace hfe { namespace world {

class IObject;
class IObjectManager { public: virtual ~IObjectManager() {} };

struct Message {
    char _pad0[0x8];
    IObject* m_a;
};

class ObjectManager : public IObjectManager {
public:
    char _pad[0x248];
    std::list<Message> m_messages;

    void removeAllMessagesTo(IObject* to);
};

void ObjectManager::removeAllMessagesTo(IObject* to)
{
    std::list<Message>::iterator it = m_messages.begin();
    while (it != m_messages.end()) {
        if (it != m_messages.end()) {
            IObject* v = it->m_a;
            IObject* x = (v == 0) ? (IObject*)0 : *(IObject**)((char*)v + 8);
            if (x == 0 || x == to) {
                std::list<Message>::iterator n = it;
                ++n;
                m_messages.erase(it);
                it = n;
            } else {
                ++it;
            }
        }
    }
}
} } }
