// FUNCTION: BF2 0x5135f0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getDisableIfEnemyInsideRadius();
};

unsigned char ControlPointTemplate::getDisableIfEnemyInsideRadius() {
    return *(unsigned char*)((char*)this + 0x224);
}

} } }
