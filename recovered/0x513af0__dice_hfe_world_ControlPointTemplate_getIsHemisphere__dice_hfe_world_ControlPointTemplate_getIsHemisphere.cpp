// FUNCTION: BF2 0x513af0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getIsHemisphere();
};

unsigned char ControlPointTemplate::getIsHemisphere() {
    return *(unsigned char*)((char*)this + 0x231);
}

} } }
