// FUNCTION: BF2 0x550d10
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setAmmoStatus(unsigned int);
};

void Soldier::setAmmoStatus(unsigned int value) {
    *(unsigned int*)((char*)this + 0x594) = value;
}

} } }
