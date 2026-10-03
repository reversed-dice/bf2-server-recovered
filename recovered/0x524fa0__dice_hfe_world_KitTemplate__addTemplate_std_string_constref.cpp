// FUNCTION: BF2 0x524fa0
#include <string>

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    virtual void addTemplate(const std::string& name);
};

class KitTemplate : public BundleTemplate {
public:
    unsigned int m_unk_0x43;
    unsigned int m_unk_0x44;
    unsigned int m_unk_0x45;
    unsigned int m_unk_0x46;
    unsigned int m_unk_0x48;
    unsigned int m_unk_0x4C;
    unsigned int m_unk_0x4D;
    unsigned int m_unk_0x4E;
    unsigned int m_unk_0x21C;
    unsigned int m_unk_0x220;
    unsigned int m_unk_0x224;
    unsigned int m_unk_0x22C;
    void* m_unk_0x238;
    void* m_unk_0x250;
    void* m_unk_0x258;
    unsigned int m_unk_0x264;
    unsigned int m_unk_0x26C;
    void* m_unk_0x288;
    void* m_unk_0x290;
    long* m_unk_0x298;

    void addTemplate(const std::string& name);
};

void KitTemplate::addTemplate(const std::string& name) {
    BundleTemplate::addTemplate(name);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_KitTemplate::addTemplate_std_string_constref (0x524fa0)