// FUNCTION: BF2 0x5465f0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setIsSprinting(unsigned char);
};

void Soldier::setIsSprinting(unsigned char value) {
    *(unsigned char*)((char*)this + 0x516) = value;
}

} } }
