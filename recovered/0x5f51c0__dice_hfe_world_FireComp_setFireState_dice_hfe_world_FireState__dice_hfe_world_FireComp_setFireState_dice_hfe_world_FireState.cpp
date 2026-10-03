// FUNCTION: BF2 0x5f51c0
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    void setFireState(unsigned int);
};

void FireComp::setFireState(unsigned int value) {
    *(unsigned int*)((char*)this + 0x15c) = value;
}

} } }
