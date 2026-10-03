// FUNCTION: BF2 0x513950
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setSignalTriggerId(unsigned int);
};

void ControlPointTemplate::setSignalTriggerId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x2b8) = value;
}

} } }
