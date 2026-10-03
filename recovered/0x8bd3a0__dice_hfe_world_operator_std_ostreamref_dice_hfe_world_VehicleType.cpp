// FUNCTION: BF2 0x8bd3a0
// BF2_FLAGS: -fcrossjumping
// operator<<(ostream&, VehicleType) -- switch on enum value, outputs string name.

#include <ostream>

extern "C" void* fn_407628(void* os, const char* lit);

enum VehicleType {
    VTNoVehicleType = 0,
    VTLightTank = 1,
    VTArtillery = 2,
    VTApc = 3,
    VTScoutCar = 4,
    VTFighter = 5,
    VTDiveBomber = 6,
    VTBomber = 7,
    VTAAGun = 8,
    VTStationaryMG = 9,
    VTDestroyer = 10,
    VTBattleship = 11,
    VTCarrier = 12,
    VTSubmarine = 13,
    VTLcvp = 14,
    VTLevelBomber = 15,
    VTArmoredCar = 16,
    VTTankHunter = 17,
    VTATGun = 18,
    VTAA = 19,
    VTBoat = 21,
    VTHelicopterAttack = 22,
    VTHelicopterTransport = 23,
    VTSniper = 24,
    VTInfantry = 25,
    VTHeavyTank = 26
};

extern "C" std::ostream& op_8bd3a0(std::ostream& os, VehicleType t)
{
    switch (t) {
    case VTNoVehicleType: fn_407628(&os, "VTNoVehicleType"); break;
    case VTLightTank: fn_407628(&os, "VTLightTank"); break;
    case VTArtillery: fn_407628(&os, "VTArtillery"); break;
    case VTApc: fn_407628(&os, "VTApc"); break;
    case VTScoutCar: fn_407628(&os, "VTScoutCar"); break;
    case VTFighter: fn_407628(&os, "VTFighter"); break;
    case VTDiveBomber: fn_407628(&os, "VTDiveBomber"); break;
    case VTBomber: fn_407628(&os, "VTBomber"); break;
    case VTAAGun: fn_407628(&os, "VTAAGun"); break;
    case VTStationaryMG: fn_407628(&os, "VTStationaryMG"); break;
    case VTDestroyer: fn_407628(&os, "VTDestroyer"); break;
    case VTBattleship: fn_407628(&os, "VTBattleship"); break;
    case VTCarrier: fn_407628(&os, "VTCarrier"); break;
    case VTSubmarine: fn_407628(&os, "VTSubmarine"); break;
    case VTLcvp: fn_407628(&os, "VTLcvp"); break;
    case VTLevelBomber: fn_407628(&os, "VTLevelBomber"); break;
    case VTArmoredCar: fn_407628(&os, "VTArmoredCar"); break;
    case VTTankHunter: fn_407628(&os, "VTTankHunter"); break;
    case VTATGun: fn_407628(&os, "VTATGun"); break;
    case VTAA: fn_407628(&os, "VTAA"); break;
    case VTBoat: fn_407628(&os, "VTBoat"); break;
    case VTHelicopterAttack: fn_407628(&os, "VTHelicopterAttack"); break;
    case VTHelicopterTransport: fn_407628(&os, "VTHelicopterTransport"); break;
    case VTSniper: fn_407628(&os, "VTSniper"); break;
    case VTInfantry: fn_407628(&os, "VTInfantry"); break;
    case VTHeavyTank: fn_407628(&os, "VTHeavyTank"); break;
    default: fn_407628(&os, "VTNoVehicleType"); break;
    }
    return os;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_VehicleType (0x8bd3a0)
