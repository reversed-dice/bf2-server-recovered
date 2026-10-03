// FUNCTION: BF2 0x513870
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getAreaValueTeam1();
};

int ControlPointTemplate::getAreaValueTeam1() {
    return *(int*)((char*)this + 0x238);
}

} } }
