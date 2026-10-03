// FUNCTION: BF2 0x513830
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getIsUnstrategicControlPoint();
};

unsigned char ControlPointTemplate::getIsUnstrategicControlPoint() {
    return *(unsigned char*)((char*)this + 0x230);
}

} } }
