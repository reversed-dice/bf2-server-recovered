// FUNCTION: BF2 0x435740
extern "C" void dice_hfe_GameEvent_dtor_GameEvent(void*);

namespace dice { namespace hfe {

class GameEvent {
public:
    char _pad[0x10];
};

class VoipPlayerMuteEvent : public GameEvent {
public:
    unsigned int getType() const;
    ~VoipPlayerMuteEvent();

    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
};

} }

dice::hfe::VoipPlayerMuteEvent::~VoipPlayerMuteEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2eb90);
    dice_hfe_GameEvent_dtor_GameEvent(this);
}
// REVERSED_FUNCTION: dice_hfe_VoipPlayerMuteEvent_dtor_VoipPlayerMuteEvent (0x435740)