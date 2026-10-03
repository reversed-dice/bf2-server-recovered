// FUNCTION: BF2 0x521480
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void setPcoId(unsigned int);
};

void PlayerControlObjectTemplate::setPcoId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x2e4) = value;
}

} } }
