// FUNCTION: BF2 0x420710
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class ChangePlayerNameEvent : public GameEvent {
public:
    virtual ~ChangePlayerNameEvent();
    unsigned char m_flag;  // +0x30
};

ChangePlayerNameEvent::~ChangePlayerNameEvent() {
}

} }
class dice_hfe_ChangePlayerNameEvent {
public:
    // REVERSED_FUNCTION: dtor_ChangePlayerNameEvent(0x420710);
};

// REVERSED_FUNCTION: dice_hfe_ChangePlayerNameEvent::dtor_ChangePlayerNameEvent (0x420710)