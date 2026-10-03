// FUNCTION: BF2 0x42fbf0
void operator delete(void*);

namespace dice { namespace hfe {

class GameEvent {
public:
    ~GameEvent();
};

class SetPrivateSquadEvent {
public:
    void logInfo(bool, int);
    ~SetPrivateSquadEvent();

    unsigned char m_unk_0x2;
    unsigned long long m_baseData;
    unsigned char m_field10;
    unsigned char m_field11;
    unsigned char m_field12;
};

SetPrivateSquadEvent::~SetPrivateSquadEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2df90);
    reinterpret_cast<GameEvent*>(this)->~GameEvent();
    operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_dtor_SetPrivateSquadEvent (0x42fbf0)