// FUNCTION: BF2 0x513b10
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setForSoldierOnly(unsigned char);
};

void ControlPointTemplate::setForSoldierOnly(unsigned char value) {
    *(unsigned char*)((char*)this + 0x2c8) = value;
}

} } }
