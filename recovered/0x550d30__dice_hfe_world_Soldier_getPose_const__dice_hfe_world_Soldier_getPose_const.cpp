// FUNCTION: BF2 0x550d30
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getPose() const;
};

int Soldier::getPose() const {
    return *(int*)((char*)this + 0x3c8);
}

} } }
