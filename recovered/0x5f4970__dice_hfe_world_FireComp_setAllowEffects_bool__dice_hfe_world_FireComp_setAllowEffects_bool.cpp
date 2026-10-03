// FUNCTION: BF2 0x5f4970
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    void setAllowEffects(unsigned char);
};

void FireComp::setAllowEffects(unsigned char value) {
    *(unsigned char*)((char*)this + 0x154) = value;
}

} } }
