// FUNCTION: BF2 0x5211d0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    int getDefaultTeam();
};

int PlayerControlObject::getDefaultTeam() {
    return *(int*)((char*)this + 0x3dc);
}

} } }
