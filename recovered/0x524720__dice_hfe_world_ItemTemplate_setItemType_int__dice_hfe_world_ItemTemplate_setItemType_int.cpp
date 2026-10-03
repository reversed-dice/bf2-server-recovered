// FUNCTION: BF2 0x524720
namespace dice { namespace hfe { namespace world {

class ItemTemplate {
public:
    void setItemType(unsigned int);
};

void ItemTemplate::setItemType(unsigned int value) {
    *(unsigned int*)((char*)this + 0x208) = value;
}

} } }
