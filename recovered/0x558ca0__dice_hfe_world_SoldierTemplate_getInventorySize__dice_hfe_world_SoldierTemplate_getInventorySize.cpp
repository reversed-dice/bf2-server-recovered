// FUNCTION: BF2 0x558ca0
namespace dice { namespace hfe { namespace world {

class SoldierTemplate {
public:
    int getInventorySize();
};

int SoldierTemplate::getInventorySize() {
    return *(int*)((char*)this + 0x224);
}

} } }
