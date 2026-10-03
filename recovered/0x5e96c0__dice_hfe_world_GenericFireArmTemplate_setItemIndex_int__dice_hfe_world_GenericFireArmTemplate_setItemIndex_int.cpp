// FUNCTION: BF2 0x5e96c0
namespace dice { namespace hfe { namespace world {

class GenericFireArmTemplate {
public:
    void setItemIndex(unsigned int);
};

void GenericFireArmTemplate::setItemIndex(unsigned int value) {
    *(unsigned int*)((char*)this + 0x248) = value;
}

} } }
