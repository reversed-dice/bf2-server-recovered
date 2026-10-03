// FUNCTION: BF2 0x41f840
namespace dice { namespace hfe {

extern void* game;
extern unsigned int IID_IGameServer;

typedef void* (*GetServerFn)(void*, unsigned int);
typedef void (*ExecFn)(void*, int, void*);

class ChallengeResponseEvent {
public:
    bool executeServer(int param);
};

bool ChallengeResponseEvent::executeServer(int param) {
    void* server = ((GetServerFn)(*(void***)game)[3])(game, IID_IGameServer);

    if (!server)
        return false;

    ((ExecFn)(*(void***)server)[11])(server, param, this);
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_ChallengeResponseEvent_executeServer_int (0x41f840)