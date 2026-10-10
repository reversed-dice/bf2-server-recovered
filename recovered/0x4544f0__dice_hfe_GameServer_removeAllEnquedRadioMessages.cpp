// FUNCTION: BF2 0x4544f0
#include <list>

namespace dice { namespace hfe {

class EventNode {
public:
    virtual void d0(); virtual void d1();
    virtual void release(); // slot 2 (0x10)
};

class GameServer {
public:
    char _pad[0x308];
    std::list<EventNode*> m_radioMessages;

    void removeAllEnquedRadioMessages();
};

void GameServer::removeAllEnquedRadioMessages()
{
    for (std::list<EventNode*>::iterator it = m_radioMessages.begin(); it != m_radioMessages.end(); ++it) {
        (*it)->release();
    }
    m_radioMessages.clear();
}

}}
