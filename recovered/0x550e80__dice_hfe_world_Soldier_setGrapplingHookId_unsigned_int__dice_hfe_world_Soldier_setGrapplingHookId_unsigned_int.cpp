// FUNCTION: BF2 0x550e80
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setGrapplingHookId(unsigned int);
};

void Soldier::setGrapplingHookId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x4f0) = value;
}

} } }
