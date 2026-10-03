// FUNCTION: BF2 0x5214e0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getPcoFlags() const;
};

int PlayerControlObjectTemplate::getPcoFlags() const {
    return *(int*)((char*)this + 0x2e8);
}

} } }
