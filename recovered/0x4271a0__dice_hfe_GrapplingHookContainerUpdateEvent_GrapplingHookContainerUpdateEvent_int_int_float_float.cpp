// FUNCTION: BF2 0x4271a0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

class GrapplingHookContainerUpdateEvent : public GameEvent {
public:
    GrapplingHookContainerUpdateEvent(int objectId, int state, float length, float speed);
    virtual ~GrapplingHookContainerUpdateEvent();
    int m_objectId;
    int m_state;
    float m_length;
    float m_speed;
};

GrapplingHookContainerUpdateEvent::GrapplingHookContainerUpdateEvent(int objectId, int state, float length, float speed)
{
    m_objectId = objectId;
    m_state = state;
    m_length = length;
    m_speed = speed;
}

GrapplingHookContainerUpdateEvent::~GrapplingHookContainerUpdateEvent() {}

} }
