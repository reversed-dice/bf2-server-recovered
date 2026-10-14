// FUNCTION: BF2 0x454600
#include <list>
namespace dice { namespace hfe {

class EventNode;
class GameServer {
public:
    char _pad[0x308];
    std::list<EventNode*> m_radioMessages;
    void enqueueRadioMessage(EventNode* node);
};

void GameServer::enqueueRadioMessage(EventNode* node) {
    if (node == 0) {
        return;
    }
    if (((unsigned (*)(void*))(*(void***)node)[0x18/8])(node) == 0xd) {
        m_radioMessages.push_back(node);
    }
}

} }
