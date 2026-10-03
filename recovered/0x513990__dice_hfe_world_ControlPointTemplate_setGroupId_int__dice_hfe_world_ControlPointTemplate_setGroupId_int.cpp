// FUNCTION: BF2 0x513990
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setGroupId(unsigned int);
};

void ControlPointTemplate::setGroupId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x248) = value;
}

} } }
