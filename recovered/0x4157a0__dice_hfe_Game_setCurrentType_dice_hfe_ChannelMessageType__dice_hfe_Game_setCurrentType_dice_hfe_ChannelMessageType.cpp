// FUNCTION: BF2 0x4157a0
namespace dice { namespace hfe {

class Game {
public:
    void setCurrentType(unsigned int);
};

void Game::setCurrentType(unsigned int value) {
    *(unsigned int*)((char*)this + 0x6c) = value;
}

} }
