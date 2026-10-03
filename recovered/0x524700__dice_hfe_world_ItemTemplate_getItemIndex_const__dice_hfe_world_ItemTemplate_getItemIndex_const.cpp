// FUNCTION: BF2 0x524700
namespace dice { namespace hfe { namespace world {

class ItemTemplate {
public:
    int getItemIndex() const;
};

int ItemTemplate::getItemIndex() const {
    return *(int*)((char*)this + 0x204);
}

} } }
