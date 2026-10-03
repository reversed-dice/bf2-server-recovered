// FUNCTION: BF2 0x42e460
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

class RequestEvent : public GameEvent {
public:
    enum RequestTypes {};
    RequestEvent(int playerId, int targetId, RequestTypes type);
    virtual ~RequestEvent();
    RequestTypes m_type;
    unsigned char m_playerId;
    unsigned char m_targetId;
};

RequestEvent::RequestEvent(int playerId, int targetId, RequestTypes type)
{
    m_type = type;
    m_playerId = playerId;
    m_targetId = targetId;
}

RequestEvent::~RequestEvent() {}

} }
