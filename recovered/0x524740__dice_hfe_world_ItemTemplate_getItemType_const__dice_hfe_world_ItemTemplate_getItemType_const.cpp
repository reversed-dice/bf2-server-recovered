// FUNCTION: BF2 0x524740
namespace dice { namespace hfe { namespace world {

class ItemTemplate {
public:
    int getItemType() const;
};

int ItemTemplate::getItemType() const {
    return *(int*)((char*)this + 0x208);
}

} } }
