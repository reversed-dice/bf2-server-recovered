// FUNCTION: BF2 0x513260
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    void setPlayer(unsigned int);
};

void ControlPoint::setPlayer(unsigned int value) {
    *(unsigned int*)((char*)this + 0x290) = value;
}

} } }
