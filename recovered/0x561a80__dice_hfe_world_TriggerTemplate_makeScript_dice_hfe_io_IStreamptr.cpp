// FUNCTION: BF2 0x561a80
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>

typedef unsigned int (*wfn_561a80)(void*, const char*, unsigned int);
bool baseMakeScript_561a80(void* self, void* stream);

struct T_561a80 {
    char _pad0x1f8[0x1f8];
    unsigned int m_0x1f8;
    float m_0x1fc;
    int m_0x200;
    float m_0x204;
    float m_0x208;
    float m_0x20c;
    bool m_0x210;
    bool makeScript(void* stream);
};

bool T_561a80::makeScript(void* stream)
{
    if (!baseMakeScript_561a80(this, stream)) return false;
    std::ostringstream ss(std::ios_base::out);
    ss << "ObjectTemplate.triggerId " << m_0x200 << std::endl;
    if (m_0x1fc != 0.0f)
        ss << "ObjectTemplate.radius " << (double)m_0x1fc << std::endl;
    ss << "ObjectTemplate.events " << m_0x1f8 << std::endl;
    if (m_0x208 > 0.0f)
        ss << "ObjectTemplate.averageTimeBetweenTests " << (double)m_0x208 << std::endl;
    if (m_0x210)
        ss << "ObjectTemplate.triggerForEachActivatingPlayer 1" << std::endl;
    if (m_0x204 != 0.0f)
        ss << "ObjectTemplate.chance " << (double)m_0x204 << std::endl;
    ss << "ObjectTemplate.minimumTimeBetweenTriggering " << (double)m_0x20c << std::endl;
    std::string str = ss.str();
    wfn_561a80 f = *(wfn_561a80*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerTemplate_makeScript_dice_hfe_io_IStreamptr (0x561a80)
