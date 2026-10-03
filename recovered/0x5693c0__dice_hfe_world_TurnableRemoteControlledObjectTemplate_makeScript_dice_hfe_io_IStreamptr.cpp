// FUNCTION: BF2 0x5693c0
#include <ostream>
#include <sstream>
#include <string>

// dice_hfe_world_TurnableRemoteControlledObjectTemplate_makeScript_dice_hfe_io_IStreamptr (0x5693c0)

typedef unsigned int (*wfn_5693c0)(void*, const char*, unsigned int);
bool baseMakeScript_5693c0(void* self, void* stream);

struct T_5693c0 {
    char _pad0x21c[0x21c];
    float m_0x21c;
    bool makeScript(void* stream);
};

bool T_5693c0::makeScript(void* stream)
{
    if (!baseMakeScript_5693c0(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    std::ostream& o = ss;
    if (m_0x21c != 0.0f) {
        o << "ObjectTemplate.turnVelocity " << (double)m_0x21c << std::endl;
    }
    std::string str = ss.str();
    wfn_5693c0 f = *(wfn_5693c0*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObjectTemplate_makeScript_dice_hfe_io_IStreamptr (0x5693c0)
