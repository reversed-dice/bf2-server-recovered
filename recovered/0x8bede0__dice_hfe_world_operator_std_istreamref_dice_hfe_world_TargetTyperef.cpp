// FUNCTION: BF2 0x8bede0
#include <sstream>
#include <string>

namespace dice { namespace hfe {
bool equalsIgnoreCase(const std::string& a, const std::string& b);
} }

// atoi() as the period glibc inlined it
extern "C" long __strtol_internal(const char*, char**, int, int);

namespace dice { namespace hfe { namespace world {
enum TargetType { TargetType_0 };
std::ostream& operator<<(std::ostream& os, TargetType v);
} } } 
namespace dice { namespace hfe { namespace world {
enum RemoteControlledObjectType { RemoteControlledObjectType_0 };
std::ostream& operator<<(std::ostream& os, RemoteControlledObjectType v);
} } } 
namespace dice { namespace hfe { namespace world {
enum TargetSystem { TargetSystem_0 };
std::ostream& operator<<(std::ostream& os, TargetSystem v);
} } } 
namespace dice { namespace hfe { namespace world {
enum WeaponTrigger { WeaponTrigger_0 };
std::ostream& operator<<(std::ostream& os, WeaponTrigger v);
} } } 
namespace dice { namespace hfe { namespace world {
enum WeaponAction { WeaponAction_0 };
std::ostream& operator<<(std::ostream& os, WeaponAction v);
} } } 
namespace dice { namespace hfe { namespace world {
enum TriggerType { TriggerType_0 };
std::ostream& operator<<(std::ostream& os, TriggerType v);
} } } 
namespace dice { namespace hfe { namespace world {
enum ReplenishingType { ReplenishingType_0 };
std::ostream& operator<<(std::ostream& os, ReplenishingType v);
} } } 
namespace dice { namespace hfe { namespace world {
enum RadiusTriggerType { RadiusTriggerType_0 };
std::ostream& operator<<(std::ostream& os, RadiusTriggerType v);
} } } 
namespace dice { namespace hfe { namespace world {
enum CameraViewMode { CameraViewMode_0 };
std::ostream& operator<<(std::ostream& os, CameraViewMode v);
} } } 

namespace dice { namespace hfe { namespace world {

std::istream& operator>>(std::istream& is, ::dice::hfe::world::TargetType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::TargetType)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "TTNone"))
        v = ::dice::hfe::world::TargetType(0);
    else if (equalsIgnoreCase(s, "TTHeat"))
        v = ::dice::hfe::world::TargetType(2);
    else if (equalsIgnoreCase(s, "TTLaser"))
        v = ::dice::hfe::world::TargetType(1);
    else if (equalsIgnoreCase(s, "TTUnique"))
        v = ::dice::hfe::world::TargetType(3);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::RemoteControlledObjectType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::RemoteControlledObjectType)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "RCNone"))
        v = ::dice::hfe::world::RemoteControlledObjectType(0);
    else if (equalsIgnoreCase(s, "RCArtillery"))
        v = ::dice::hfe::world::RemoteControlledObjectType(1);
    else if (equalsIgnoreCase(s, "RCSatellite"))
        v = ::dice::hfe::world::RemoteControlledObjectType(2);
    else if (equalsIgnoreCase(s, "RCUav"))
        v = ::dice::hfe::world::RemoteControlledObjectType(3);
    else if (equalsIgnoreCase(s, "RCHorizontalTurn"))
        v = ::dice::hfe::world::RemoteControlledObjectType(4);
    else if (equalsIgnoreCase(s, "RCVerticalTurn"))
        v = ::dice::hfe::world::RemoteControlledObjectType(5);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::TargetSystem& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::TargetSystem)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "TSNone"))
        v = ::dice::hfe::world::TargetSystem(0);
    else if (equalsIgnoreCase(s, "TSWireGuided"))
        v = ::dice::hfe::world::TargetSystem(3);
    else if (equalsIgnoreCase(s, "TSTVGuided"))
        v = ::dice::hfe::world::TargetSystem(4);
    else if (equalsIgnoreCase(s, "TSHeatSeeking"))
        v = ::dice::hfe::world::TargetSystem(1);
    else if (equalsIgnoreCase(s, "TSLaserGuided"))
        v = ::dice::hfe::world::TargetSystem(2);
    else if (equalsIgnoreCase(s, "TSParabellic"))
        v = ::dice::hfe::world::TargetSystem(5);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::WeaponTrigger& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::WeaponTrigger)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "WTPostFire"))
        v = ::dice::hfe::world::WeaponTrigger(0);
    else if (equalsIgnoreCase(s, "WTReload"))
        v = ::dice::hfe::world::WeaponTrigger(2);
    else if (equalsIgnoreCase(s, "WTFireComplete"))
        v = ::dice::hfe::world::WeaponTrigger(1);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::WeaponAction& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::WeaponAction)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "WAShow"))
        v = ::dice::hfe::world::WeaponAction(0);
    else if (equalsIgnoreCase(s, "WAHide"))
        v = ::dice::hfe::world::WeaponAction(1);
    else if (equalsIgnoreCase(s, "WADrop"))
        v = ::dice::hfe::world::WeaponAction(2);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::TriggerType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::TriggerType)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "TTYNone"))
        v = ::dice::hfe::world::TriggerType(0);
    else if (equalsIgnoreCase(s, "TTYTime"))
        v = ::dice::hfe::world::TriggerType(1);
    else if (equalsIgnoreCase(s, "TTYMove"))
        v = ::dice::hfe::world::TriggerType(4);
    else if (equalsIgnoreCase(s, "TTYFire"))
        v = ::dice::hfe::world::TriggerType(2);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::ReplenishingType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::ReplenishingType)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "RTHeal"))
        v = ::dice::hfe::world::ReplenishingType(0);
    else if (equalsIgnoreCase(s, "RTAmmo"))
        v = ::dice::hfe::world::ReplenishingType(1);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::RadiusTriggerType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::RadiusTriggerType)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "MTYNone"))
        v = ::dice::hfe::world::RadiusTriggerType(0);
    else if (equalsIgnoreCase(s, "RTAmmo"))
        v = ::dice::hfe::world::RadiusTriggerType(1);
    else if (equalsIgnoreCase(s, "MTYVehicle"))
        v = ::dice::hfe::world::RadiusTriggerType(2);
    else if (equalsIgnoreCase(s, "MTYPco"))
        v = ::dice::hfe::world::RadiusTriggerType(3);
    return is;
}

std::istream& operator>>(std::istream& is, ::dice::hfe::world::CameraViewMode& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() == 1) {
        ss << (::dice::hfe::world::CameraViewMode)__strtol_internal(s.c_str(), 0, 10, 0);
        s = ss.str();
    }
    if (equalsIgnoreCase(s, "CVMFirstPerson"))
        v = ::dice::hfe::world::CameraViewMode(0);
    else if (equalsIgnoreCase(s, "CVMInside"))
        v = ::dice::hfe::world::CameraViewMode(1);
    else if (equalsIgnoreCase(s, "CVMChase"))
        v = ::dice::hfe::world::CameraViewMode(3);
    else if (equalsIgnoreCase(s, "CVMFrontChase"))
        v = ::dice::hfe::world::CameraViewMode(4);
    else if (equalsIgnoreCase(s, "CVMFlyBy"))
        v = ::dice::hfe::world::CameraViewMode(5);
    else if (equalsIgnoreCase(s, "CVMTrace"))
        v = ::dice::hfe::world::CameraViewMode(6);
    else if (equalsIgnoreCase(s, "CVMExternTrace"))
        v = ::dice::hfe::world::CameraViewMode(7);
    else if (equalsIgnoreCase(s, "CVMNose"))
        v = ::dice::hfe::world::CameraViewMode(2);
    return is;
}

} } }

