// FUNCTION: BF2 0x459290
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe {

namespace ai {
class IAI {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual bool isEnabled(); // slot 7 = 0x38
};

struct AIInstanceServer {
    static IAI* m_iAI;
};
}

class RadioMessageReceivedEvent {
public:
    char _pad[0x28];
    unsigned char m_targetId; // 0x28
    unsigned char m_29;       // 0x29
    char _pad2[6];
    int m_type;               // 0x30
};

class GameServer {
public:
    class IEventWrapper {
    public:
        virtual ~IEventWrapper() {}
    };

    void playerMessageEvent(IEventWrapper&);
    void serverPlayerMessageEvent(IEventWrapper&);
    void sendRadioMessageToAI(IEventWrapper&, int);

    void handleRadioMessageReceivedEvent(RadioMessageReceivedEvent*, void*);
};

namespace {

class RadioMessageEW : public GameServer::IEventWrapper {
public:
    RadioMessageReceivedEvent* m_event;
    RadioMessageEW(RadioMessageReceivedEvent* ev) : m_event(ev) {}
    virtual ~RadioMessageEW() {}
};

class ServerRadioMessageEW : public RadioMessageEW {
public:
    ServerRadioMessageEW(RadioMessageReceivedEvent* ev) : RadioMessageEW(ev) {}
    virtual ~ServerRadioMessageEW() {}
};

}

void GameServer::handleRadioMessageReceivedEvent(RadioMessageReceivedEvent* event, void*) {
    RadioMessageEW ew1(event);

    unsigned char saved = event->m_targetId;
    if ((unsigned int)(event->m_type - 12) <= 1)
        event->m_targetId = 0xff;

    playerMessageEvent(ew1);

    ServerRadioMessageEW ew2(event);
    serverPlayerMessageEvent(ew2);

    if (ai::AIInstanceServer::m_iAI && ai::AIInstanceServer::m_iAI->isEnabled())
        sendRadioMessageToAI(ew1, event->m_29);

    event->m_targetId = saved;
}

}}
