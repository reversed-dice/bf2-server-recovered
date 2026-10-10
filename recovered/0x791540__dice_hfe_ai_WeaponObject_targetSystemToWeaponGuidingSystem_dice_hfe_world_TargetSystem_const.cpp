// FUNCTION: BF2 0x791540
namespace dice { namespace hfe {
namespace world {
enum TargetSystem {
    TS_None = 0,
    TS_1 = 1,
    TS_2 = 2,
    TS_3 = 3,
    TS_4 = 4
};
}
namespace ai {

class WeaponObject {
public:
    int targetSystemToWeaponGuidingSystem(dice::hfe::world::TargetSystem ts) const;
};

int WeaponObject::targetSystemToWeaponGuidingSystem(dice::hfe::world::TargetSystem ts) const {
    switch (ts) {
    case dice::hfe::world::TS_1:
        return 1;
    case dice::hfe::world::TS_2:
        return 2;
    case dice::hfe::world::TS_3:
        return 3;
    case dice::hfe::world::TS_4:
        return 4;
    default:
        return 0;
    }
}

} } }
