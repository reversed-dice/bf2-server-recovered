// FUNCTION: BF2 0x513750
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setUnableToChangeTeam(unsigned char);
};

void ControlPointTemplate::setUnableToChangeTeam(unsigned char value) {
    *(unsigned char*)((char*)this + 0x228) = value;
}

} } }
