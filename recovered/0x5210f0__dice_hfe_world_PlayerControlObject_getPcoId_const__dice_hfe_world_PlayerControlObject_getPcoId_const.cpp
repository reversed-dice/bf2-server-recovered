// FUNCTION: BF2 0x5210f0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    int getPcoId() const;
};

int PlayerControlObject::getPcoId() const {
    return *(int*)((char*)this + 0x260);
}

} } }
