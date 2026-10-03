// FUNCTION: BF2 0x5c61d0
namespace dice { namespace hfe { namespace world {

class WeaponHudCompTemplate {
public:
    int getRef();
};

int WeaponHudCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
