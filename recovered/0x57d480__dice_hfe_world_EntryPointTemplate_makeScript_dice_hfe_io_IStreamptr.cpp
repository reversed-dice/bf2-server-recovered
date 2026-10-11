// FUNCTION: BF2 0x57d480
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_EntryPointTemplate_makeScript_dice_hfe_io_IStreamptr (0x57d480)

typedef unsigned int (*wfn_57d480)(void*, const char*, unsigned int);
bool baseMakeScript_57d480(void* self, void* stream);

struct T_57d480 {
    char _pad0x1c8[0x1c8];
    float m_0x1c8;
    bool makeScript(void* stream);
};

bool T_57d480::makeScript(void* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (!baseMakeScript_57d480(this, stream)) return false;
    float r = m_0x1c8;
    ss << "ObjectTemplate.setEntryRadius " << (double)r << std::endl;
    std::string str(ss.str());
    wfn_57d480 f = *(wfn_57d480*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_EntryPointTemplate_makeScript_dice_hfe_io_IStreamptr (0x57d480)
