// FUNCTION: BF2 0x577010
#include <string>

namespace dice { namespace hfe { namespace world {

class TemplateInfo {
public:
    virtual ~TemplateInfo();
    std::string m_name;   // 0x08
    int*        m_rc;     // 0x10
};

TemplateInfo::~TemplateInfo()
{
    int* p = m_rc;
    if (p && --*p == 0)
        ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_BundleTemplate_TemplateInfo_dtor_TemplateInfo (0x577010)
