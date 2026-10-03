// FUNCTION: BF2 0x513b70
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getHasGreyCapturingState();
};

unsigned char ControlPointTemplate::getHasGreyCapturingState() {
    return *(unsigned char*)((char*)this + 0x2c9);
}

} } }
