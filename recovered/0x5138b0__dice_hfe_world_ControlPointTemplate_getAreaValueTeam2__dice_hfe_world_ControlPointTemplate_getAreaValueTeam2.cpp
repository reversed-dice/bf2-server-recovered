// FUNCTION: BF2 0x5138b0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getAreaValueTeam2();
};

int ControlPointTemplate::getAreaValueTeam2() {
    return *(int*)((char*)this + 0x23c);
}

} } }
