// FUNCTION: BF2 0x513a50
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getHoistFlag();
};

unsigned char ControlPointTemplate::getHoistFlag() {
    return *(unsigned char*)((char*)this + 0x290);
}

} } }
