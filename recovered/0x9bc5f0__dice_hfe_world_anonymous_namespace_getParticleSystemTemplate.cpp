// FUNCTION: BF2 0x9bc5f0
// BF2_FLAGS: -fno-optimize-sibling-calls
namespace dice {
namespace hfe {
namespace world {

extern int CID_SpriteParticleSystemTemplate;
extern int CID_MeshParticleSystemTemplate;
extern int CID_TrailSystemTemplate;
extern int CID_NonScreenAlignedParticleSystemTemplate;

void* getActiveTemplate(unsigned int cid);

namespace {

void* getParticleSystemTemplate()
{
    void* tmpl = getActiveTemplate(CID_SpriteParticleSystemTemplate);
    if (tmpl != 0) {
        return tmpl;
    }
    tmpl = getActiveTemplate(CID_MeshParticleSystemTemplate);
    if (tmpl != 0) {
        return tmpl;
    }
    tmpl = getActiveTemplate(CID_TrailSystemTemplate);
    if (tmpl != 0) {
        return tmpl;
    }
    return getActiveTemplate(CID_NonScreenAlignedParticleSystemTemplate);
}

} // namespace
} // namespace world
} // namespace hfe
} // namespace dice
