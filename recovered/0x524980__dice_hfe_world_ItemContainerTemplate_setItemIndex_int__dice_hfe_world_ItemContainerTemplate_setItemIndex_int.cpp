// FUNCTION: BF2 0x524980
namespace dice { namespace hfe { namespace world {

class ItemContainerTemplate {
public:
    void setItemIndex(unsigned int);
};

void ItemContainerTemplate::setItemIndex(unsigned int value) {
    *(unsigned int*)((char*)this + 0x208) = value;
}

} } }
