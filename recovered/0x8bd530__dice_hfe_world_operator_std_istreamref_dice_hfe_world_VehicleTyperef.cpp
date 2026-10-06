// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x8bd530
#include <istream>
#include <string>

namespace dice { namespace hfe { namespace world {
enum VehicleType { VehicleType_0 };
} } } 

namespace dice { namespace hfe { namespace world {

std::istream& operator>>(std::istream& is, ::dice::hfe::world::VehicleType& v)
{
    std::string s;
    is >> s;
    if (s.compare("VTHeavyTank") == 0 || s.compare("HeavyTank") == 0)
        v = ::dice::hfe::world::VehicleType(0);
    else if (s.compare("VTLightTank") == 0 || s.compare("LightTank") == 0)
        v = ::dice::hfe::world::VehicleType(1);
    else if (s.compare("VTArtillery") == 0 || s.compare("Artillery") == 0)
        v = ::dice::hfe::world::VehicleType(2);
    else if (s.compare("VTApc") == 0 || s.compare("Apc") == 0)
        v = ::dice::hfe::world::VehicleType(3);
    else if (s.compare("VTScoutCar") == 0 || s.compare("ScoutCar") == 0)
        v = ::dice::hfe::world::VehicleType(4);
    else if (s.compare("VTFighter") == 0 || s.compare("Fighter") == 0)
        v = ::dice::hfe::world::VehicleType(5);
    else if (s.compare("VTDiveBomber") == 0 || s.compare("DiveBomber") == 0)
        v = ::dice::hfe::world::VehicleType(6);
    else if (s.compare("VTBomber") == 0 || s.compare("Bomber") == 0)
        v = ::dice::hfe::world::VehicleType(7);
    else if (s.compare("VTAAGun") == 0 || s.compare("AAGun") == 0)
        v = ::dice::hfe::world::VehicleType(8);
    else if (s.compare("VTStationaryMG") == 0 || s.compare("StationaryMG") == 0)
        v = ::dice::hfe::world::VehicleType(9);
    else if (s.compare("VTDestroyer") == 0 || s.compare("Destroyer") == 0)
        v = ::dice::hfe::world::VehicleType(10);
    else if (s.compare("VTBattleship") == 0 || s.compare("Battleship") == 0)
        v = ::dice::hfe::world::VehicleType(11);
    else if (s.compare("VTCarrier") == 0 || s.compare("Carrier") == 0)
        v = ::dice::hfe::world::VehicleType(12);
    else if (s.compare("VTSubmarine") == 0 || s.compare("Submarine") == 0)
        v = ::dice::hfe::world::VehicleType(13);
    else if (s.compare("VTLcvp") == 0 || s.compare("Lcvp") == 0)
        v = ::dice::hfe::world::VehicleType(14);
    else if (s.compare("VTDefGun") == 0 || s.compare("DefGun") == 0)
        v = ::dice::hfe::world::VehicleType(15);
    else if (s.compare("VTLevelBomber") == 0 || s.compare("LevelBomber") == 0)
        v = ::dice::hfe::world::VehicleType(16);
    else if (s.compare("VTArmoredCar") == 0 || s.compare("ArmoredCar") == 0)
        v = ::dice::hfe::world::VehicleType(17);
    else if (s.compare("VTTankHunter") == 0 || s.compare("TankHunter") == 0)
        v = ::dice::hfe::world::VehicleType(18);
    else if (s.compare("VTATGun") == 0 || s.compare("ATGun") == 0)
        v = ::dice::hfe::world::VehicleType(19);
    else if (s.compare("VTHelicopterAttack") == 0 || s.compare("HelicopterAttack") == 0)
        v = ::dice::hfe::world::VehicleType(22);
    else if (s.compare("VTHelicopterTransport") == 0 || s.compare("HelicopterTransport") == 0)
        v = ::dice::hfe::world::VehicleType(23);
    else if (s.compare("VTBoat") == 0 || s.compare("Boat") == 0)
        v = ::dice::hfe::world::VehicleType(21);
    else if (s.compare("VTAA") == 0 || s.compare("AA") == 0)
        v = ::dice::hfe::world::VehicleType(20);
    else if (s.compare("VTSniper") == 0 || s.compare("Sniper") == 0)
        v = ::dice::hfe::world::VehicleType(24);
    else if (s.compare("VTInfantry") == 0 || s.compare("Infantry") == 0)
        v = ::dice::hfe::world::VehicleType(25);
    else if (s.compare("VTNoVehicleType") == 0 || s.compare("NoVehicleType") == 0)
        v = ::dice::hfe::world::VehicleType(26);
    else
        v = ::dice::hfe::world::VehicleType(26);
    return is;
}

} } } 
