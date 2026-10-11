// FUNCTION: BF2 0x5f9400
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_LPFireCompTemplate_makeScript_dice_hfe_io_IStreamptr (0x5f9400)

typedef unsigned int (*wfn_5f9400)(void*, const char*, unsigned int);
bool baseMakeScript_5f9400(void* self, void* stream);

struct T_5f9400 {
    char _pad0x90[0x90];
    float m_0x90;
    bool makeScript(void* stream);
};

bool T_5f9400::makeScript(void* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (!baseMakeScript_5f9400(this, stream)) return false;
    float r = m_0x90;
    ss << "ObjectTemplate.fire.radioMessageDelay " << (double)r << std::endl;
    std::string str(ss.str());
    wfn_5f9400 f = *(wfn_5f9400*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_LPFireCompTemplate_makeScript_dice_hfe_io_IStreamptr (0x5f9400)
