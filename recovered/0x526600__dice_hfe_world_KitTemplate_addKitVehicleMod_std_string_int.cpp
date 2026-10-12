// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x526600
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct KitVehicleMod {
    std::string m_name;
    int m_mod;
};

struct KitTemplate {
    char _pad0[0x248];
    std::vector<KitVehicleMod> m_vehicleMods;
    void addKitVehicleMod(std::string name, int mod);
};

void KitTemplate::addKitVehicleMod(std::string p_name, int p_mod)
{
    std::string lname = p_name;
    KitVehicleMod v;
    v.m_name = lname;
    v.m_mod = p_mod;
    m_vehicleMods.push_back(v);
}

} } }
