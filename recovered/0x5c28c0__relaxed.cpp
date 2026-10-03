// FUNCTION: BF2 0x5c28c0
namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    long getNoTemplates() const;

private:
    unsigned char _pad[0xa0];
    char* m_templatesBegin;
    char* m_templatesEnd;
};

long BundleTemplate::getNoTemplates() const {
    return (m_templatesEnd - m_templatesBegin) >> 3;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_BundleTemplate_getNoTemplates_const (0x507c00)