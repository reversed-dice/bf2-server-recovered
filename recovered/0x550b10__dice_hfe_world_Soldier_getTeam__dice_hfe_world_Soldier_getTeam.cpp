// FUNCTION: BF2 0x550b10
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getTeam();
};

int Soldier::getTeam() {
    return *(int*)((char*)this + 0x354);
}

} } }
