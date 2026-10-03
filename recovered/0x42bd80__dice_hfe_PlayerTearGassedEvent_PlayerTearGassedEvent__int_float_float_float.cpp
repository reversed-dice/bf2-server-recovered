// FUNCTION: BF2 0x42bd80
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    char _pad[16];
};

class PlayerTearGassedEvent : public GameEvent {
public:
    PlayerTearGassedEvent();
    PlayerTearGassedEvent(unsigned int param_1, float param_2, float param_3, float param_4);
    unsigned int getType() const;
    void member_439a80();

    unsigned int m_int;     // +0x10
    float m_float1;         // +0x14
    float m_float2;         // +0x18
    float m_float3;         // +0x1c
};

PlayerTearGassedEvent::PlayerTearGassedEvent(unsigned int param_1, float param_2, float param_3, float param_4)
    : GameEvent()
{
    m_int = param_1;
    m_float1 = param_2;
    m_float2 = param_3;
    m_float3 = param_4;
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d5f0);
}

} }
// REVERSED_FUNCTION: dice_hfe_PlayerTearGassedEvent_PlayerTearGassedEvent::int_float_float_float (0x42bd80)