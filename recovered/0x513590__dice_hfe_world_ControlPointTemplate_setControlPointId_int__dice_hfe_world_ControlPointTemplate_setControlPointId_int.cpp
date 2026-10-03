// FUNCTION: BF2 0x513590
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setControlPointId(unsigned int);
};

void ControlPointTemplate::setControlPointId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x218) = value;
}

} } }
