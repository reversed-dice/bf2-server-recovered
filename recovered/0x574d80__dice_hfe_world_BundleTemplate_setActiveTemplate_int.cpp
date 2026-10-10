// FUNCTION: BF2 0x574d80
#include <vector>

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    struct TemplateInfo;
    void setActiveTemplate(int index);
    static int mActiveMemberId;
private:
    char pad0[0x1d8];
    std::vector<TemplateInfo*> m_templates;
};

int BundleTemplate::mActiveMemberId;

void BundleTemplate::setActiveTemplate(int index) {
    if (index < 0)
        return;
    if (index < (int)m_templates.size())
        mActiveMemberId = index;
}

} } }
