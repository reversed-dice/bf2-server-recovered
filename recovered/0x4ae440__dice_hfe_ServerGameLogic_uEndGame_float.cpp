// FUNCTION: BF2 0x4ae440
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

class ServerGameLogic {
public:
    void uEndGame(float dt);
    void uFirstEndGame();
    void restartMap();
    void loadNextLevel();
};

void ServerGameLogic::uEndGame(float dt)
{
    if (*(char*)((char*)this + 0x492) != 0) {
        uFirstEndGame();
    }
    *(char*)((char*)this + 0x588) = 0;
    *(float*)((char*)this + 0x4a0) -= dt;
    if (*(float*)((char*)this + 0x4a0) <= 0.0f) {
        *(float*)((char*)this + 0x4a0) = 9999.0f;
        int limit = *(int*)(*(char**)0x108b660 + 0x9c);
        if (limit != -1 && ++*(int*)((char*)this + 0x4b0) >= limit) {
            loadNextLevel();
        } else {
            restartMap();
        }
    }
}

} }
