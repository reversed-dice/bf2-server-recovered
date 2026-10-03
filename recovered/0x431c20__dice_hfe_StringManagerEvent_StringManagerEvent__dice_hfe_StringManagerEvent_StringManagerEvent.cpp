// FUNCTION: BF2 0x431c20
namespace dice { namespace hfe {
class GameEvent {
public:
    GameEvent();
};
class StringManagerEvent : public GameEvent {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0xB;
    unsigned char m_unk_0xC;
    unsigned int m_unk_0x5C;
    unsigned char m_unk_0x61;

    StringManagerEvent();
};
StringManagerEvent::StringManagerEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2e3d0);
}
} }
// REVERSED_FUNCTION: dice_hfe_StringManagerEvent_StringManagerEvent (0x431c20)