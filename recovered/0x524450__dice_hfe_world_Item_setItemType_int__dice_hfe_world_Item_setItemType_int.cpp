// FUNCTION: BF2 0x524450
namespace dice { namespace hfe { namespace world {

class Item {
public:
    void setItemType(unsigned int);
};

void Item::setItemType(unsigned int value) {
    *(unsigned int*)((char*)this + 0x248) = value;
}

} } }
