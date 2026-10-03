// FUNCTION: BF2 0x521600
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void setArtPos(unsigned char);
};

void PlayerControlObjectTemplate::setArtPos(unsigned char value) {
    *(unsigned char*)((char*)this + 0x314) = value;
}

} } }
