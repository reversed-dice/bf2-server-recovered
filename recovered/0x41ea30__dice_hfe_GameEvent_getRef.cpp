// FUNCTION: BF2 0x41ea30
namespace dice { namespace hfe {
class GameEvent {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int GameEvent::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEvent_getRef (0x41ea30)
