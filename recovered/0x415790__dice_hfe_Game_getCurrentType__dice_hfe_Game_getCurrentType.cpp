// FUNCTION: BF2 0x415790
namespace dice { namespace hfe {

class Game {
public:
    int getCurrentType();
};

int Game::getCurrentType() {
    return *(int*)((char*)this + 0x6c);
}

} }
