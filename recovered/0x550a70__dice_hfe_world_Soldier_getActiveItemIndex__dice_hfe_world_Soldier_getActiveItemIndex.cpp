// FUNCTION: BF2 0x550a70
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getActiveItemIndex();
};

int Soldier::getActiveItemIndex() {
    return *(int*)((char*)this + 0x358);
}

} } }
