// FUNCTION: BF2 0x524470
namespace dice { namespace hfe { namespace world {

class Item {
public:
    int getItemType() const;
};

int Item::getItemType() const {
    return *(int*)((char*)this + 0x248);
}

} } }
