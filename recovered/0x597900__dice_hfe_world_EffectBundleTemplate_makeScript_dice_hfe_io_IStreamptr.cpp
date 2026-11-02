// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x597900
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace hfe {

class RandomDistribution {
public:
    unsigned char _pad[0x18];
};

std::ostream& operator<<(std::ostream& os, RandomDistribution& rd);

namespace world {

class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1f8];
};

class EffectProperties {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad1[0x160];
};

class EffectBundleTemplate : public BundleTemplate, public EffectProperties {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    float m_minDistanceUnderwaterSurface;        // +0x358
    float m_maxDistanceUnderwaterSurface;        // +0x35c
    RandomDistribution m_timeToLive;             // +0x360
    RandomDistribution m_randomAgeFactor;        // +0x378
    float m_lodDistance;                         // +0x390
    float m_emitFrequencyScaleFactorLowerBound;  // +0x394
    float m_startLodPercentageOfLodDistance;     // +0x398
    bool m_startAtCreation;                      // +0x39c
    std::vector<int> m_workOnMaterial;           // +0x3a0
    unsigned char _pad2[0x18];                   // +0x3b8
    unsigned int m_setStartOnEffects;            // +0x3d0
    unsigned int m_setStopOnEffects;             // +0x3d4
    bool m_speedFromPhysics;                     // +0x3d8
};

bool EffectBundleTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    if (!EffectProperties::makeScript(stream))
        return false;
    std::ostringstream oss(std::ios_base::out);
    if (m_minDistanceUnderwaterSurface != -1.0f)
        oss << "ObjectTemplate.minDistanceUnderwaterSurface " << m_minDistanceUnderwaterSurface << std::endl;
    if (m_maxDistanceUnderwaterSurface != -1.0f)
        oss << "ObjectTemplate.maxDistanceUnderwaterSurface " << m_maxDistanceUnderwaterSurface << std::endl;
    for (int i = 0; i < (int)m_workOnMaterial.size(); ++i)
        oss << "ObjectTemplate.addWorkOnMaterial " << m_workOnMaterial[i] << std::endl;
    oss << "ObjectTemplate.setStartOnEffects " << m_setStartOnEffects << std::endl;
    oss << "ObjectTemplate.setStopOnEffects " << m_setStopOnEffects << std::endl;
    oss << "ObjectTemplate.timeToLive " << m_timeToLive << std::endl;
    oss << "ObjectTemplate.randomAgeFactor " << m_randomAgeFactor << std::endl;
    oss << "ObjectTemplate.startAtCreation " << m_startAtCreation << std::endl;
    oss << "ObjectTemplate.speedFromPhysics " << m_speedFromPhysics << std::endl;
    if (m_emitFrequencyScaleFactorLowerBound != 0.05f)
        oss << "ObjectTemplate.emitFrequencyScaleFactorLowerBound " << m_emitFrequencyScaleFactorLowerBound << std::endl;
    if (m_startLodPercentageOfLodDistance >= 0.0f)
        oss << "ObjectTemplate.startLodPercentageOfLodDistance " << m_startLodPercentageOfLodDistance << std::endl;
    if (m_lodDistance != 501.0f)
        oss << "ObjectTemplate.lodDistance " << m_lodDistance << std::endl;
    std::string s = oss.str();
    return stream->write(s.data(), s.length()) == s.length();
}

} } }
