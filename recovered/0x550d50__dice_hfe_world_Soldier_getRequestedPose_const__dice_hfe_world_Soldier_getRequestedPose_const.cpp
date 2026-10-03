// FUNCTION: BF2 0x550d50
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getRequestedPose() const;
};

int Soldier::getRequestedPose() const {
    return *(int*)((char*)this + 0x3cc);
}

} } }
