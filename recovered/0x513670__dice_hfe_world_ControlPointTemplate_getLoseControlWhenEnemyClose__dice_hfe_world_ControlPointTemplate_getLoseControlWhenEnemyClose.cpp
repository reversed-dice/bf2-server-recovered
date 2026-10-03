// FUNCTION: BF2 0x513670
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getLoseControlWhenEnemyClose();
};

unsigned char ControlPointTemplate::getLoseControlWhenEnemyClose() {
    return *(unsigned char*)((char*)this + 0x226);
}

} } }
