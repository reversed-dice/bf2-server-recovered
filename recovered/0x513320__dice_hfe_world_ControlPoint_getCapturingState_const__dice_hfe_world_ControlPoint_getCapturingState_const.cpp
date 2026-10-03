// FUNCTION: BF2 0x513320
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    int getCapturingState() const;
};

int ControlPoint::getCapturingState() const {
    return *(int*)((char*)this + 0x284);
}

} } }
