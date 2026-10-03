// FUNCTION: BF2 0x536ba0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    unsigned char getNeverDrawAs1p() const;
};

unsigned char PlayerControlObjectTemplate::getNeverDrawAs1p() const {
    return *(unsigned char*)((char*)this + 0x3ce);
}

} } }
