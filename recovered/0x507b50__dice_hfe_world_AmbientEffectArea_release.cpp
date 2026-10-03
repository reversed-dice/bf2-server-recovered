// FUNCTION: BF2 0x507b50
namespace dice { namespace hfe { namespace world {
class Release {
public:
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot30();
    unsigned char _pad[0x230];
    unsigned int m_ref;
    unsigned int release() { unsigned int r = --m_ref; if (r == 0) { if (this != 0) { slot30(); } } return r; }
};
unsigned int release_0x507b50(Release* p) { return p->release(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectArea_release (0x507b50)
