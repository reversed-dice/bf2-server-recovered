// FUNCTION: BF2 0x513b30
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getForSoldierOnly();
};

unsigned char ControlPointTemplate::getForSoldierOnly() {
    return *(unsigned char*)((char*)this + 0x2c8);
}

} } }
