// FUNCTION: BF2 0x5249a0
namespace dice { namespace hfe { namespace world {

class ItemContainerTemplate {
public:
    void setItemType(unsigned int);
};

void ItemContainerTemplate::setItemType(unsigned int value) {
    *(unsigned int*)((char*)this + 0x20c) = value;
}

} } }
