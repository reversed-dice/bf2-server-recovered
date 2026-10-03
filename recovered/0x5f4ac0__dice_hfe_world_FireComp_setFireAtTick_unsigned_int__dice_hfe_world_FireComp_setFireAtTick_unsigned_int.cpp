// FUNCTION: BF2 0x5f4ac0
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    void setFireAtTick(unsigned int);
};

void FireComp::setFireAtTick(unsigned int value) {
    *(unsigned int*)((char*)this + 0x44) = value;
}

} } }
