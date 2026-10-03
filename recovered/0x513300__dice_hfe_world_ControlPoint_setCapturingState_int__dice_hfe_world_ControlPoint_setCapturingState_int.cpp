// FUNCTION: BF2 0x513300
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    void setCapturingState(unsigned int);
};

void ControlPoint::setCapturingState(unsigned int value) {
    *(unsigned int*)((char*)this + 0x284) = value;
}

} } }
