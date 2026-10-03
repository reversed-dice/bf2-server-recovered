// FUNCTION: BF2 0x598a30
#include <string>

namespace dice { namespace hfe { namespace world {

class EffectInfo {
public:
    virtual ~EffectInfo();
    std::string m_name;   // 0x08
    int*        m_rc;     // 0x10
};

EffectInfo::~EffectInfo()
{
    int* p = m_rc;
    if (p && --*p == 0)
        ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectBundleTemplate_EffectInfo_dtor_EffectInfo (0x598a30)
