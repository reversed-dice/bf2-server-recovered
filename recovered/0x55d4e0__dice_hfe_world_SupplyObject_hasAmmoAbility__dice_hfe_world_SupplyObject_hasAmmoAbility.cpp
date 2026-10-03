// FUNCTION: BF2 0x55d4e0
namespace dice { namespace hfe { namespace world {

class SupplyObject {
public:
    bool hasAmmoAbility();
};

bool SupplyObject::hasAmmoAbility() {
    return *(float*)((char*)*(void**)((char*)this + 0x238) + 0x208) > *(float*)0xb2d910;
}

} } }
