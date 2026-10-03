// FUNCTION: BF2 0x464cd0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x124];
    int field;
    int getCurrentInputIndex() const;
};
int GameServer::getCurrentInputIndex() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getCurrentInputIndex (0x464cd0)
