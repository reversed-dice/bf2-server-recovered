// FUNCTION: BF2 0x5756c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {
int compareIgnoreCase(char const*, char const*);

namespace world {

class BundleTemplate {
public:
    struct TemplateInfo { void* unk; std::string path; };
    void addTemplate(std::string const& name);
    static int mActiveMemberId;
private:
    char pad0[0x1d8];
    std::vector<TemplateInfo*> m_templates;
};

int BundleTemplate::mActiveMemberId;

void BundleTemplate::addTemplate(std::string const& name)
{
    if (std::string(name, 0, 2).compare("S_") == 0) {
        for (unsigned int i = 0; i < m_templates.size(); ++i) {
            if (compareIgnoreCase(m_templates[i]->path.c_str(), name.c_str()) == 0) {
                mActiveMemberId = i;
                return;
            }
        }
    }
    m_templates.push_back(((TemplateInfo* (*)(BundleTemplate*, std::string const&))(*(void***)this)[0x278 / 8])(this, name));
    mActiveMemberId = (int)m_templates.size() - 1;
}

} } }
