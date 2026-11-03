// FUNCTION: BF2 0x512420
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <vector>
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

struct Vec2 {
    float x, y;
    bool isZero() const
    {
        return std::fabs(x) + std::fabs(y) <= FLT_EPSILON;
    }
};

struct Vec3 {
    float x, y, z;
    // TRICK: 75
    bool isZero() const
    {
        return std::fabs(x) <= FLT_EPSILON && std::fabs(y) <= FLT_EPSILON && std::fabs(z) <= FLT_EPSILON;
    }
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

class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad[0x18];
};

struct SupplyGroupNeeded {
    int m_group;
    bool m_needed;
    unsigned char _pad[3];
};

class ControlPointTemplate : public BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    std::string m_controlPointName;         // 0x18
    unsigned char _pad1[0x204 - 0x20];
    float m_radius;                         // 0x204
    int m_team;                             // 0x208
    unsigned char _pad2[0x218 - 0x20c];
    int m_controlPointId;                   // 0x218
    float m_timeToGetControl;               // 0x21c
    float m_timeToLoseControl;              // 0x220
    bool m_disableIfEnemyInsideRadius;      // 0x224
    bool m_disableWhenLosingControl;        // 0x225
    bool m_loseControlWhenEnemyClose;       // 0x226
    bool m_loseControlWhenNotClose;         // 0x227
    bool m_unableToChangeTeam;              // 0x228
    unsigned char _pad3[0x22c - 0x229];
    unsigned int m_minNrToTakeControl;      // 0x22c
    bool m_isUnstrategicControlPoint;       // 0x230
    bool m_isHemisphere;                    // 0x231
    unsigned char _pad4[0x238 - 0x232];
    unsigned int m_areaValueTeam1;          // 0x238
    unsigned int m_areaValueTeam2;          // 0x23c
    int m_enemyTicketLossWhenCaptured;      // 0x240
    bool m_showOnMinimap;                   // 0x244
    unsigned char _pad5[0x248 - 0x245];
    int m_supplyGroupId;                    // 0x248
    std::vector<SupplyGroupNeeded> m_supplyGroupNeeded[2]; // 0x250
    int m_supplyValueNeededTeam[2];         // 0x280
    int m_supplyValueTeam[2];               // 0x288
    bool m_hoistFlag;                       // 0x290
    unsigned char _pad6[0x298 - 0x291];
    std::string m_flagTemplateTeam[3];      // 0x298
    float m_hoistMin;                       // 0x2b0
    float m_hoistMax;                       // 0x2b4
    int m_signalTriggerId;                  // 0x2b8
    Vec3 m_radiusOffset;                    // 0x2bc
    bool m_forSoldierOnly;                  // 0x2c8
    bool m_hasGreyCapturingState;           // 0x2c9
    unsigned char _pad7[0x2cc - 0x2ca];
    Vec2 m_minimapNameOffset;               // 0x2cc
};

bool ControlPointTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_controlPointName.length() != 0)
        ss << "ObjectTemplate.setControlPointName " << m_controlPointName << std::endl;
    if (m_radius != 1.0f)
        ss << "ObjectTemplate.radius " << m_radius << std::endl;
    if (!m_radiusOffset.isZero())
        ss << "ObjectTemplate.radiusOffset " << m_radiusOffset.x << "/" << m_radiusOffset.y << "/"
           << m_radiusOffset.z << std::endl;
    if (m_team != 0)
        ss << "ObjectTemplate.team " << m_team << std::endl;
    if (m_controlPointId != -1)
        ss << "ObjectTemplate.controlPointId " << m_controlPointId << std::endl;
    if (m_areaValueTeam1 != 0)
        ss << "ObjectTemplate.areaValueTeam1 " << m_areaValueTeam1 << std::endl;
    if (m_areaValueTeam2 != 0)
        ss << "ObjectTemplate.areaValueTeam2 " << m_areaValueTeam2 << std::endl;
    if (m_enemyTicketLossWhenCaptured != 0)
        ss << "ObjectTemplate.enemyTicketLossWhenCaptured " << m_enemyTicketLossWhenCaptured << std::endl;
    if (m_timeToGetControl != 10.0f)
        ss << "ObjectTemplate.timeToGetControl " << m_timeToGetControl << std::endl;
    if (m_timeToLoseControl != 10.0f)
        ss << "ObjectTemplate.timeToLoseControl " << m_timeToLoseControl << std::endl;
    if (m_disableIfEnemyInsideRadius)
        ss << "ObjectTemplate.disableIfEnemyInsideRadius " << m_disableIfEnemyInsideRadius << std::endl;
    if (m_disableWhenLosingControl)
        ss << "ObjectTemplate.disableWhenLosingControl " << m_disableWhenLosingControl << std::endl;
    if (m_loseControlWhenEnemyClose != true)
        ss << "ObjectTemplate.loseControlWhenEnemyClose " << m_loseControlWhenEnemyClose << std::endl;
    if (m_loseControlWhenNotClose)
        ss << "ObjectTemplate.loseControlWhenNotClose " << m_loseControlWhenNotClose << std::endl;
    if (m_minNrToTakeControl != 1)
        ss << "ObjectTemplate.minNrToTakeControl " << m_minNrToTakeControl << std::endl;
    if (m_unableToChangeTeam)
        ss << "ObjectTemplate.unableToChangeTeam " << m_unableToChangeTeam << std::endl;
    if (m_showOnMinimap != true)
        ss << "ObjectTemplate.showOnMinimap " << m_showOnMinimap << std::endl;
    if (m_isUnstrategicControlPoint)
        ss << "ObjectTemplate.isUnstrategicControlPoint " << m_isUnstrategicControlPoint << std::endl;
    if (m_isHemisphere)
        ss << "ObjectTemplate.isHemisphere " << m_isHemisphere << std::endl;
    if (m_forSoldierOnly)
        ss << "ObjectTemplate.ForSoldierOnly " << m_forSoldierOnly << std::endl;
    if (m_hasGreyCapturingState)
        ss << "ObjectTemplate.HasGreyCapturingState 1" << std::endl;
    if (!m_minimapNameOffset.isZero())
        ss << "ObjectTemplate.MinimapNameOffset " << m_minimapNameOffset.x << "/" << m_minimapNameOffset.y
           << std::endl;
    if (m_supplyGroupId != -1)
        ss << "ObjectTemplate.supplyGroupId " << m_supplyGroupId << std::endl;
    if (m_signalTriggerId != -1)
        ss << "ObjectTemplate.signalTriggerId " << m_signalTriggerId << std::endl;
    for (int i = 0; i < 2; i++) {
        for (std::vector<SupplyGroupNeeded>::const_iterator it = m_supplyGroupNeeded[i].begin();
             it != m_supplyGroupNeeded[i].end(); ++it)
            ss << "ObjectTemplate.supplyGroupNeeded " << i + 1 << " " << it->m_group << " " << it->m_needed
               << std::endl;
        if (m_supplyValueNeededTeam[i] != 0)
            ss << "ObjectTemplate.supplyValueNeededTeam" << i + 1 << " " << m_supplyValueNeededTeam[i] << std::endl;
        if (m_supplyValueTeam[i] != 0)
            ss << "ObjectTemplate.supplyValueTeam" << i + 1 << " " << m_supplyValueTeam[i] << std::endl;
    }
    if (m_hoistFlag != true)
        ss << "ObjectTemplate.hoistFlag " << m_hoistFlag << std::endl;
    ss << "ObjectTemplate.hoistMinMax " << m_hoistMin << "/" << m_hoistMax << std::endl;
    for (int i = 0; i < 3; i++) {
        if (m_flagTemplateTeam[i].length() != 0)
            ss << "ObjectTemplate.flagTemplateTeam" << i << " " << m_flagTemplateTeam[i] << std::endl;
    }
    std::string s = ss.str();
    stream->write(s.c_str(), s.length());
    return true;
}

} } }
