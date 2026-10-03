// FUNCTION: BF2 0x524410
namespace dice { namespace hfe { namespace world {

class Item {
public:
    void setOwnerId(unsigned int);
};

void Item::setOwnerId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x244) = value;
}

} } }
