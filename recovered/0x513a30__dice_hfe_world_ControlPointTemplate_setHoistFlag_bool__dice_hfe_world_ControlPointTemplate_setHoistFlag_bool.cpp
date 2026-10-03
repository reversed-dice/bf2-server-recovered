// FUNCTION: BF2 0x513a30
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setHoistFlag(unsigned char);
};

void ControlPointTemplate::setHoistFlag(unsigned char value) {
    *(unsigned char*)((char*)this + 0x290) = value;
}

} } }
