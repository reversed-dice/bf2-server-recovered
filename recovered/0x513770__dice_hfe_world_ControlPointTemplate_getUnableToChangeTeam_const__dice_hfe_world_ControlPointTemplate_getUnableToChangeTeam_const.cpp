// FUNCTION: BF2 0x513770
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getUnableToChangeTeam() const;
};

unsigned char ControlPointTemplate::getUnableToChangeTeam() const {
    return *(unsigned char*)((char*)this + 0x228);
}

} } }
