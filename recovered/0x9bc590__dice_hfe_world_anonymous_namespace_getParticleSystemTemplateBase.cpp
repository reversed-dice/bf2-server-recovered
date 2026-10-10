// FUNCTION: BF2 0x9bc590
class IObject;

extern unsigned int CID_SpriteParticleSystemTemplate;
extern unsigned int CID_MeshParticleSystemTemplate;
extern unsigned int CID_ParticleSystemEmitterTemplate;
extern unsigned int CID_TrailSystemTemplate;
extern unsigned int CID_NonScreenAlignedParticleSystemTemplate;

IObject* getActiveTemplate(unsigned int cid);

IObject* getParticleSystemTemplateBase() {
    IObject* t = getActiveTemplate(CID_SpriteParticleSystemTemplate);
    if (!t) t = getActiveTemplate(CID_MeshParticleSystemTemplate);
    if (!t) t = getActiveTemplate(CID_ParticleSystemEmitterTemplate);
    if (!t) t = getActiveTemplate(CID_TrailSystemTemplate);
    if (!t) t = getActiveTemplate(CID_NonScreenAlignedParticleSystemTemplate);
    return t;
}
