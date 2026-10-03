// FUNCTION: BF2 0x57cd00
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_DynamicBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x57cd00)

typedef unsigned int (*wfn_57cd00)(void*, const char*, unsigned int);
bool baseMakeScript_57cd00(void* self, void* stream);

struct T_57cd00 {
    char _pad0x1f4[0x1f4];
    float m_0x1f4;
    bool makeScript(void* stream);
};

bool T_57cd00::makeScript(void* stream)
{
    if (!baseMakeScript_57cd00(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    if (m_0x1f4 != -1.0f) {
        o << "ObjectTemplate.respawnDelay " << (double)m_0x1f4 << std::endl;
    }
    std::string str = ss.str();
    wfn_57cd00 f = *(wfn_57cd00*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_DynamicBundleTemplate_makeScript_dice_hfe_io_IStreamptr (0x57cd00)
