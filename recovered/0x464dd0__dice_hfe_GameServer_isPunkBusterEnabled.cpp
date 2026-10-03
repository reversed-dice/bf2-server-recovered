// FUNCTION: BF2 0x464dd0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x31c];
    bool field;
    int isPunkBusterEnabled() const;
};
int GameServer::isPunkBusterEnabled() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_isPunkBusterEnabled (0x464dd0)
