// FUNCTION: BF2 0x42b1e0
extern void* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameServer;

namespace dice { namespace hfe {

class MedalEvent {
public:
    bool executeServer(unsigned int);
};

bool MedalEvent::executeServer(unsigned int param) {
    return (*(unsigned long long (**)(void*, unsigned int))(*(char**)dice_hfe_game + 0x18))(dice_hfe_game, dice_hfe_IID_IGameServer) != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_MedalEvent_executeServer_int (0x42b1e0)