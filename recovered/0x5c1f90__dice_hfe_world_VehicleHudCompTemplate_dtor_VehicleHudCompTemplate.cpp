// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c1f90
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct IVehicleHudCompTemplate {
    virtual void v0();
};

struct IConsoleSaveable {
    virtual void s0();
};

class VehicleHudIcons {
public:
    std::vector<std::string> m_icons;
    std::vector<std::string> m_icons2;
    std::string m_s30;
    std::string m_s38;
    std::string m_s40;
    std::vector<int> m_ints;
    std::vector<int> m_ints2;
};

struct HudData {
    void* m_p;                 // 0x28
    std::string m_a;           // 0x30
    std::string m_b;           // 0x38
    std::string m_c;           // 0x40
    std::string m_d;           // 0x48
    std::string m_e;           // 0x50
    char _pad[0x10];           // 0x58
    std::vector<int> m_modes;  // 0x68
};

class VehicleHudCompTemplate : public IVehicleHudCompTemplate, public IConsoleSaveable {
public:
    unsigned int m_refCount;   // 0x10
    bool m_flag;               // 0x14
    char _pad15[3];
    std::string m_s18;         // 0x18
    std::string m_s20;         // 0x20
    HudData m_data;            // 0x28
    char _pad80[0x18];         // 0x80
    int m_98;                  // 0x98
    int m_9c;                  // 0x9c
    VehicleHudIcons m_icons;   // 0xa0
    virtual ~VehicleHudCompTemplate();
};

VehicleHudCompTemplate::~VehicleHudCompTemplate() {}

} } }
