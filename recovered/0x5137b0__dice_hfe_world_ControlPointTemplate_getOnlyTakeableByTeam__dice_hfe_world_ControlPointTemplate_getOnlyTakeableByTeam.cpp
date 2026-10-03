// FUNCTION: BF2 0x5137b0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getOnlyTakeableByTeam();
};

int ControlPointTemplate::getOnlyTakeableByTeam() {
    return *(int*)((char*)this + 0x234);
}

} } }
