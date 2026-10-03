// FUNCTION: BF2 0x524990
namespace dice { namespace hfe { namespace world {

class ItemContainerTemplate {
public:
    int getItemIndex() const;
};

int ItemContainerTemplate::getItemIndex() const {
    return *(int*)((char*)this + 0x208);
}

} } }
