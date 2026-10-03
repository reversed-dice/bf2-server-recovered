// FUNCTION: BF2 0x455af0
namespace dice { namespace hfe {
class GameServer {
public:
    void clientLoadLevel_int(int arg);
};

void GameServer::clientLoadLevel_int(int arg) {
    extern void sub_4559f0(GameServer*, int);
    sub_4559f0(this, arg);
}
// REVERSED_FUNCTION: dice_hfe_GameServer::clientLoadLevel_int (0x455af0)
} }