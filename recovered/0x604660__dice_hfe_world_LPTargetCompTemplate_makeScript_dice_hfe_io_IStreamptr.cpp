// FUNCTION: BF2 0x604660
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_LPTargetCompTemplate_makeScript_dice_hfe_io_IStreamptr (0x604660)

typedef unsigned int (*wfn_604660)(void*, const char*, unsigned int);
bool baseMakeScript_604660(void* self, void* stream);

struct T_604660 {
    char _pad0x60[0x60];
    std::string m_0x60;
    char _pad1[0x70 - 0x68];
    float m_0x70;
    char _pad2[0x78 - 0x74];
    bool m_0x78;
    bool m_0x79;
    bool makeScript(void* stream);
};

bool T_604660::makeScript(void* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (!baseMakeScript_604660(this, stream)) return false;
    float v = m_0x70;
    if (v != -1.0f) {
        ss << "ObjectTemplate.target.updateInterval " << (double)v << std::endl;
    }
    if (m_0x60.size() != 0) {
        ss << "ObjectTemplate.target.targetObjectTemplate " << m_0x60 << std::endl;
    }
    if (m_0x78 == 0) {
        ss << "ObjectTemplate.target.disableFireWhenActiveMissile " << m_0x78 << std::endl;
    }
    if (m_0x79 == 0) {
        ss << "ObjectTemplate.target.disableGuidanceOnReload " << m_0x79 << std::endl;
    }
    std::string str = ss.str();
    wfn_604660 f = *(wfn_604660*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_LPTargetCompTemplate_makeScript_dice_hfe_io_IStreamptr (0x604660)
