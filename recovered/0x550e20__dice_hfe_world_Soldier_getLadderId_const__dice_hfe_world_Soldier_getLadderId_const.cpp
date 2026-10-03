// FUNCTION: BF2 0x550e20
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getLadderId() const;
};

int Soldier::getLadderId() const {
    return *(int*)((char*)this + 0x4e8);
}

} } }
