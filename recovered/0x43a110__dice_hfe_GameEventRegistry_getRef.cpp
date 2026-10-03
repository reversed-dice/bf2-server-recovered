// FUNCTION: BF2 0x43a110
namespace dice { namespace hfe {
class GameEventRegistry {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int GameEventRegistry::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_getRef (0x43a110)
