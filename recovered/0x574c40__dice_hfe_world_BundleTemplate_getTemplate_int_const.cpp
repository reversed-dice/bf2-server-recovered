// FUNCTION: BF2 0x574c40
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    struct TemplateInfo {
        char pad0[8];
        std::string m_name;
    };
    std::string getTemplate(int index) const;
private:
    char pad0[0x1d8];
    std::vector<TemplateInfo*> m_templates;
};

std::string BundleTemplate::getTemplate(int index) const {
    if (index < 0 || index >= (int)m_templates.size())
        return std::string();
    return m_templates[index]->m_name;
}

} } }
