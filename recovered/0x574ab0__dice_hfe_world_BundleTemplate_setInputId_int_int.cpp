// FUNCTION: BF2 0x574ab0
#include <vector>

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    struct TemplateInfo {
        char pad0[0x18];
        int m_inputId;
    };
    void setInputId(int id, int index);
private:
    char pad0[0x1d8];
    std::vector<TemplateInfo*> m_templates;
};

void BundleTemplate::setInputId(int id, int index) {
    if (index < 0)
        return;
    if (index >= (int)m_templates.size())
        return;
    m_templates[index]->m_inputId = id;
}

} } }
