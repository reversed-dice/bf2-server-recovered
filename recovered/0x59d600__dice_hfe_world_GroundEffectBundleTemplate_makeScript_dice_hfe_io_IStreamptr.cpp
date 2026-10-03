// FUNCTION: BF2 0x59d600
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_GroundEffectBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x59d600)

typedef unsigned int (*wfn_59d600)(void*, const char*, unsigned int);
bool baseMakeScript_59d600(void* self, void* stream);

struct T_59d600 {
    char _pad0x1c8[0x1c8];
    float m_0x1c8;
    bool makeScript(void* stream);
};

bool T_59d600::makeScript(void* stream)
{
    if (!baseMakeScript_59d600(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    o << "ObjectTemplate.maxTriggerDistance " << (double)m_0x1c8 << std::endl;
    std::string str = ss.str();
    wfn_59d600 f = *(wfn_59d600*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_GroundEffectBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x59d600)
