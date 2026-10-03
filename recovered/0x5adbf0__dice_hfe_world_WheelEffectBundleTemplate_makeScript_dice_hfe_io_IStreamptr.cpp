// FUNCTION: BF2 0x5adbf0
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_WheelEffectBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x5adbf0)

typedef unsigned int (*wfn_5adbf0)(void*, const char*, unsigned int);
bool baseMakeScript_5adbf0(void* self, void* stream);

struct Sub_1c8 { bool makeScript(void* stream); };

struct T_5adbf0 {
    char _pad0x1c8[0x1c8];
    Sub_1c8 m_0x1c8;
    char _pad0x326[0x15d];
    bool m_0x326;
    bool makeScript(void* stream);
};

bool T_5adbf0::makeScript(void* stream)
{
    if (!baseMakeScript_5adbf0(this, stream)) return false;
    if (!m_0x1c8.makeScript(stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    o << "ObjectTemplate.emitDirectionZFromSpeedDof " << m_0x326 << std::endl;
    std::string str = ss.str();
    wfn_5adbf0 f = *(wfn_5adbf0*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x5adbf0)
