// FUNCTION: BF2 0x513910
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setShowOnMinimap(unsigned char);
};

void ControlPointTemplate::setShowOnMinimap(unsigned char value) {
    *(unsigned char*)((char*)this + 0x244) = value;
}

} } }
