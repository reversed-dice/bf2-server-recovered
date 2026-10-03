// FUNCTION: BF2 0x564e30
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_TriggerableTargetTemplate_makeScript_dice_hfe_io_IStreamptr (0x564e30)

typedef unsigned int (*wfn_564e30)(void*, const char*, unsigned int);
bool baseMakeScript_564e30(void* self, void* stream);

struct T_564e30 {
    char _pad0x1fc[0x1fc];
    unsigned int m_0x1fc;
    bool makeScript(void* stream);
};

bool T_564e30::makeScript(void* stream)
{
    if (!baseMakeScript_564e30(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    if (m_0x1fc) {
        o << "ObjectTemplate.targetType " << m_0x1fc << std::endl;
    }
    std::string str = ss.str();
    wfn_564e30 f = *(wfn_564e30*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_TriggerableTargetTemplate_makeScript_dice_hfe_io_IStreamptr (0x564e30)
