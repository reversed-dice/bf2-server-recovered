// FUNCTION: BF2 0x42e400
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
    GameEvent(int, int);
};

class RequestEvent : public GameEvent {
public:
    int m_requestType;
    unsigned char m_unk_0x14;
    unsigned char m_unk_0x15;

    RequestEvent(int param1, int param2, int requestType);
};

RequestEvent::RequestEvent(int param1, int param2, int requestType)
    : GameEvent(param1, param2)
{
    m_requestType = requestType;
    m_unk_0x14 = static_cast<unsigned char>(param1);
    m_unk_0x15 = static_cast<unsigned char>(param2);
    vptr = reinterpret_cast<void*>(0xb2dcf0);
}

} }
// REVERSED_FUNCTION: dice_hfe_RequestEvent_RequestEvent_int_int_dice_hfe_RequestEvent_RequestTypes (0x42e400)