// FUNCTION: BF2 0x5246e0
namespace dice { namespace hfe { namespace world {

class ItemTemplate {
public:
    void setItemIndex(unsigned int);
};

void ItemTemplate::setItemIndex(unsigned int value) {
    *(unsigned int*)((char*)this + 0x204) = value;
}

} } }
