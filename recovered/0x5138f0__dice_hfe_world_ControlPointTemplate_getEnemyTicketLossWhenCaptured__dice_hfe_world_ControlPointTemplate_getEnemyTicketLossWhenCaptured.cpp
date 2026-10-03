// FUNCTION: BF2 0x5138f0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getEnemyTicketLossWhenCaptured();
};

int ControlPointTemplate::getEnemyTicketLossWhenCaptured() {
    return *(int*)((char*)this + 0x240);
}

} } }
