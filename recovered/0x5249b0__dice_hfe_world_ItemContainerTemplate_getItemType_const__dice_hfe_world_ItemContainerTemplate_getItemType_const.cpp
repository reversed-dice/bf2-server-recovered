// FUNCTION: BF2 0x5249b0
namespace dice { namespace hfe { namespace world {

class ItemContainerTemplate {
public:
    int getItemType() const;
};

int ItemContainerTemplate::getItemType() const {
    return *(int*)((char*)this + 0x20c);
}

} } }
