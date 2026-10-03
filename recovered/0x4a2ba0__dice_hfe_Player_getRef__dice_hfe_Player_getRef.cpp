// FUNCTION: BF2 0x4a2ba0
namespace dice { namespace hfe {

class Player {
public:
    int getRef();
};

int Player::getRef() {
    return *(int*)((char*)this + 0x68);
}

} }
