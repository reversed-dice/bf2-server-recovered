// FUNCTION: BF2 0x524800
namespace dice { namespace hfe { namespace world {

class Item {
public:
    int getRef();
};

int Item::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
