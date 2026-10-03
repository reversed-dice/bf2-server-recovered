// FUNCTION: BF2 0x524430
namespace dice { namespace hfe { namespace world {

class Item {
public:
    int getOwnerId();
};

int Item::getOwnerId() {
    return *(int*)((char*)this + 0x244);
}

} } }
