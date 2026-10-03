// FUNCTION: BF2 0x550cf0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getAmmoStatus();
};

int Soldier::getAmmoStatus() {
    return *(int*)((char*)this + 0x594);
}

} } }
