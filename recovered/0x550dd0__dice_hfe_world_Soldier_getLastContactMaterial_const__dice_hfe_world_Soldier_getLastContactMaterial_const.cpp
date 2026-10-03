// FUNCTION: BF2 0x550dd0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getLastContactMaterial() const;
};

int Soldier::getLastContactMaterial() const {
    return *(int*)((char*)this + 0x4b4);
}

} } }
