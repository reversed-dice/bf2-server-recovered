// FUNCTION: BF2 0x513ad0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setIsHemisphere(unsigned char);
};

void ControlPointTemplate::setIsHemisphere(unsigned char value) {
    *(unsigned char*)((char*)this + 0x231) = value;
}

} } }
