// FUNCTION: BF2 0x513630
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getDisableWhenLosingControl();
};

unsigned char ControlPointTemplate::getDisableWhenLosingControl() {
    return *(unsigned char*)((char*)this + 0x225);
}

} } }
