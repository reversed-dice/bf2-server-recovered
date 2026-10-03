// FUNCTION: BF2 0x415770
namespace dice { namespace hfe {

class Game {
public:
    int getCurrentFlags();
};

int Game::getCurrentFlags() {
    return *(int*)((char*)this + 0x68);
}

} }
