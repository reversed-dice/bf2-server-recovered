// FUNCTION: BF2 0x5132e0
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    int getFlag() const;
};

int ControlPoint::getFlag() const {
    return *(int*)((char*)this + 0x280);
}

} } }
