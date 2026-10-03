// FUNCTION: BF2 0x5214a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getPcoId();
};

int PlayerControlObjectTemplate::getPcoId() {
    return *(int*)((char*)this + 0x2e4);
}

} } }
