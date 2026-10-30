// FUNCTION: BF2 0x5b69e0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

inline std::ostream& operator<<(std::ostream& os, Vec3 const& v)
{
    os << v.x << '/';
    os << v.y << '/';
    return os << v.z;
}

namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

}

namespace world {

class ArmorGLCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    unsigned char _pad0[0x15];
    bool m_alignLastEffectToHitDirection;
    unsigned char _pad1[0x62];

    std::vector<std::string> m_effectNames;
    std::vector<bool> m_effectSpectacular;
    std::vector<Vec3> m_effectPositions;
    std::vector<Vec3> m_effectDirections;
    std::vector<int> m_effectMaterials;

    std::vector<std::string> m_wreckNames;
    std::vector<Vec3> m_wreckPositions;
    std::vector<Vec3> m_wreckDirections;
    std::vector<int> m_wreckMaterials;

    float m_showDamageAsDirt;
    float m_wreckHitPoints;
    float m_hitPoints;
    float m_maxHitPoints;
    float m_wreckHealth;
    float m_attackDamage;
    float m_angleMod;
    float m_speedMod;
    int m_defaultMaterial;
    float m_explosionRadius;
    float m_explosionDamage;
    int m_explosionMaterial;
    float m_explosionForce;
    float m_explosionForceMod;
    float m_explosionForceMax;
    float m_wreckExplosionRadius;
    float m_wreckExplosionDamage;
    int m_wreckExplosionMaterial;
    float m_wreckExplosionForce;
    float m_wreckExplosionForceMod;
    float m_wreckExplosionForceMax;
    float m_hpLostWhileCriticalDamage;
    float m_hpLostWhileUpSideDown;
    float m_hpLostWhileInWater;
    float m_hpLostWhileInDeepWater;
    float m_waterDamageDelay;
    float m_deepWaterDamageDelay;
    float m_waterLevel;
    float m_deepWaterLevel;
    bool m_canBeRepairedWhenWreck;
    unsigned char _pad2[3];
    float m_criticalDamage;
    unsigned char _pad3[4];
    float m_timeToStayAsWreck;
    float m_timeToStayAfterDestroyed;
    float m_wreckDelay;
    bool m_hideChildrenOnSpectacularDeath;
    bool m_destroyOnSpectacularDeath;
    bool m_canBeDestroyed;
    bool m_useMMOnDeath;
};

bool ArmorGLCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_maxHitPoints != 10.0f) {
        ss << "ObjectTemplate.armor.maxHitPoints " << m_maxHitPoints << std::endl;
    }
    if (m_hitPoints != 10.0f) {
        ss << "ObjectTemplate.armor.hitPoints " << m_hitPoints << std::endl;
    }
    if (m_defaultMaterial != -1) {
        ss << "ObjectTemplate.armor.defaultMaterial " << m_defaultMaterial << std::endl;
    }
    if (m_hpLostWhileUpSideDown != 0.0f) {
        ss << "ObjectTemplate.armor.hpLostWhileUpSideDown " << m_hpLostWhileUpSideDown << std::endl;
    }
    if (m_hpLostWhileInWater != 0.0f) {
        ss << "ObjectTemplate.armor.hpLostWhileInWater " << m_hpLostWhileInWater << std::endl;
    }
    if (m_hpLostWhileInDeepWater != 0.0f) {
        ss << "ObjectTemplate.armor.hpLostWhileInDeepWater " << m_hpLostWhileInDeepWater << std::endl;
    }
    if (m_hpLostWhileCriticalDamage != 1.0f) {
        ss << "ObjectTemplate.armor.hpLostWhileCriticalDamage " << m_hpLostWhileCriticalDamage << std::endl;
    }
    if (m_waterDamageDelay != 3.0f) {
        ss << "ObjectTemplate.armor.waterDamageDelay " << m_waterDamageDelay << std::endl;
    }
    if (m_deepWaterDamageDelay != 1.0f) {
        ss << "ObjectTemplate.armor.deepWaterDamageDelay " << m_deepWaterDamageDelay << std::endl;
    }
    if (m_waterLevel != 1.0f) {
        ss << "ObjectTemplate.armor.waterLevel " << m_waterLevel << std::endl;
    }
    if (m_deepWaterLevel != 1.0f) {
        ss << "ObjectTemplate.armor.deepWaterLevel " << m_deepWaterLevel << std::endl;
    }
    if (m_explosionForce != 0.0f) {
        ss << "ObjectTemplate.armor.explosionForce " << m_explosionForce << std::endl;
    }
    if (m_explosionForceMod != 1.0f) {
        ss << "ObjectTemplate.armor.explosionForceMod " << m_explosionForceMod << std::endl;
    }
    if (m_explosionForceMax != 10.0f) {
        ss << "ObjectTemplate.armor.explosionForceMax " << m_explosionForceMax << std::endl;
    }
    if (m_explosionDamage != 0.0f) {
        ss << "ObjectTemplate.armor.explosionDamage " << m_explosionDamage << std::endl;
    }
    if (m_explosionRadius != 0.0f) {
        ss << "ObjectTemplate.armor.explosionRadius " << m_explosionRadius << std::endl;
    }
    if (m_explosionMaterial != 0) {
        ss << "ObjectTemplate.armor.explosionMaterial " << m_explosionMaterial << std::endl;
    }
    if (m_wreckExplosionForce != 0.0f) {
        ss << "ObjectTemplate.armor.wreckExplosionForce " << m_wreckExplosionForce << std::endl;
    }
    if (m_wreckExplosionForceMod != 1.0f) {
        ss << "ObjectTemplate.armor.wreckExplosionForceMod " << m_wreckExplosionForceMod << std::endl;
    }
    if (m_wreckExplosionForceMax != 100.0f) {
        ss << "ObjectTemplate.armor.wreckExplosionForceMax " << m_wreckExplosionForceMax << std::endl;
    }
    if (m_wreckExplosionDamage != 0.0f) {
        ss << "ObjectTemplate.armor.wreckExplosionDamage " << m_wreckExplosionDamage << std::endl;
    }
    if (m_wreckExplosionRadius != 0.0f) {
        ss << "ObjectTemplate.armor.wreckExplosionRadius " << m_wreckExplosionRadius << std::endl;
    }
    if (m_wreckExplosionMaterial != 0) {
        ss << "ObjectTemplate.armor.wreckExplosionMaterial " << m_wreckExplosionMaterial << std::endl;
    }
    if (m_wreckHitPoints != 10.0f) {
        ss << "ObjectTemplate.armor.wreckHitPoints " << m_wreckHitPoints << std::endl;
    }
    if (m_timeToStayAsWreck != 20.0f) {
        ss << "ObjectTemplate.armor.timeToStayAsWreck " << m_timeToStayAsWreck << std::endl;
    }
    if (m_timeToStayAfterDestroyed != 0.0f) {
        ss << "ObjectTemplate.armor.timeToStayAfterDestroyed " << m_timeToStayAfterDestroyed << std::endl;
    }
    if (m_criticalDamage != 0.0f) {
        ss << "ObjectTemplate.armor.criticalDamage " << m_criticalDamage << std::endl;
    }
    if (m_angleMod != 0.0f) {
        ss << "ObjectTemplate.armor.angleMod " << m_angleMod << std::endl;
    }
    if (m_attackDamage != 1.0f) {
        ss << "ObjectTemplate.armor.attackDamage " << m_attackDamage << std::endl;
    }
    if (m_speedMod != 1.0f) {
        ss << "ObjectTemplate.armor.speedMod " << m_speedMod << std::endl;
    }
    if (m_wreckDelay != 0.0f) {
        ss << "ObjectTemplate.armor.wreckDelay " << m_wreckDelay << std::endl;
    }
    if (m_canBeRepairedWhenWreck) {
        ss << "ObjectTemplate.armor.canBeRepairedWhenWreck 1" << std::endl;
    }
    if (m_alignLastEffectToHitDirection) {
        ss << "ObjectTemplate.armor.alignLastEffectToHitDirection " << m_alignLastEffectToHitDirection << std::endl;
    }
    if (m_hideChildrenOnSpectacularDeath) {
        ss << "ObjectTemplate.armor.hideChildrenOnSpectacularDeath 1" << std::endl;
    }
    if (m_destroyOnSpectacularDeath) {
        ss << "ObjectTemplate.armor.destroyOnSpectacularDeath 1" << std::endl;
    }
    if (!m_canBeDestroyed) {
        ss << "ObjectTemplate.armor.canBeDestroyed 0" << std::endl;
    }
    if (m_showDamageAsDirt > -1.0f) {
        ss << "ObjectTemplate.armor.showDamageAsDirt " << m_showDamageAsDirt << std::endl;
    }
    if (!m_useMMOnDeath) {
        ss << "ObjectTemplate.armor.useMMOnDeath 0" << std::endl;
    }
    for (int i = 0; i < (int)m_effectNames.size(); i++) {
        if (m_effectSpectacular[i]) {
            ss << "ObjectTemplate.armor.addArmorEffectSpectacular " << m_effectMaterials[i] << " "
               << m_effectNames[i] << " " << m_effectPositions[i] << " " << m_effectDirections[i]
               << std::endl;
        } else {
            ss << "ObjectTemplate.armor.addArmorEffect " << m_effectMaterials[i] << " "
               << m_effectNames[i] << " " << m_effectPositions[i] << " " << m_effectDirections[i]
               << std::endl;
        }
    }
    for (int i = 0; i < (int)m_wreckNames.size(); i++) {
        ss << "ObjectTemplate.armor.addWreckArmorEffect " << m_wreckMaterials[i] << " "
           << m_wreckNames[i] << " " << m_wreckPositions[i] << " " << m_wreckDirections[i]
           << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
