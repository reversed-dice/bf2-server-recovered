// FUNCTION: BF2 0x513240
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    int getTeam();
};

int ControlPoint::getTeam() {
    return *(int*)((char*)this + 0x250);
}

} } }
