// FUNCTION: BF2 0x507c00
namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    long getNoTemplates() const;

private:
    unsigned char _pad[0x1d8];
    char* m_templatesBegin;
    char* m_templatesEnd;
};

long BundleTemplate::getNoTemplates() const {
    return (m_templatesEnd - m_templatesBegin) >> 3;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_BundleTemplate_getNoTemplates_const (0x507c00)