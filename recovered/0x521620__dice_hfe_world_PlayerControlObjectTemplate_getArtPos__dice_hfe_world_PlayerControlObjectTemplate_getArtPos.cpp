// FUNCTION: BF2 0x521620
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    unsigned char getArtPos();
};

unsigned char PlayerControlObjectTemplate::getArtPos() {
    return *(unsigned char*)((char*)this + 0x314);
}

} } }
