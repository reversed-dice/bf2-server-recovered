// FUNCTION: BF2 0x53d530
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    // TRICK: 75
    float lengthSquare() const { return x * x + y * y + z * z; }
};

struct Vec4 {
    float x, y, z, w;
};

struct Mat4 {
    Vec4 r[4];
};

inline std::ostream& operator<<(std::ostream& os, Vec2 const& v)
{
    os << v.x << '/';
    return os << v.y;
}

inline std::ostream& operator<<(std::ostream& os, Vec3 const& v)
{
    os << v.x << '/';
    os << v.y << '/';
    return os << v.z;
}

void getRotationZXY(Mat4 const& mat, float& a, float& b, float& c);

namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

enum PlayerInputMap { PIM_Default = 0x40 };
std::ostream& operator<<(std::ostream& os, PlayerInputMap map);

}

namespace world {

enum VehicleCategory { VCLand = 0, VCDefaultControls = 4 };
enum VehicleType { VTNone = 0x1a };
std::ostream& operator<<(std::ostream& os, VehicleCategory c);
std::ostream& operator<<(std::ostream& os, VehicleType t);

class IAnimationSystem {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual std::string const& getName() const;
};

class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    char _pad0[0x208];
};

class PlayerControlObjectTemplate : public BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    std::string m_seatName;                         // 0x208
    Mat4 m_seatMatrix;                              // 0x210
    IAnimationSystem* m_seatAnimationSystem;        // 0x250
    float m_seatLeftRotationLimit;                  // 0x258
    float m_seatRightRotationLimit;                 // 0x25c
    Vec3 m_soldierExitPosition;                     // 0x260
    Vec3 m_soldierExitRotation;                     // 0x26c
    char _pad278[0x20];
    bool m_dontClearTeamOnExit;                     // 0x298
    bool m_destroyOnExit;                           // 0x299
    bool m_dontAllowExit;                           // 0x29a
    bool m_hasRestrictedExit;                       // 0x29b
    Vec3 m_altSoldierExitPosition;                  // 0x29c
    int m_x2a8;
    dice::hfe::io::PlayerInputMap m_regulateYawInput;         // 0x2ac
    dice::hfe::io::PlayerInputMap m_regulatePitchInput;       // 0x2b0
    dice::hfe::io::PlayerInputMap m_regulateRollInput;        // 0x2b4
    dice::hfe::io::PlayerInputMap m_regulateVerticalPosInput; // 0x2b8
    Vec2 m_regulateYaw;                             // 0x2bc
    Vec2 m_regulatePitch;                           // 0x2c4
    Vec2 m_regulateRoll;                            // 0x2cc
    Vec2 m_regulateVerticalPos;                     // 0x2d4
    float m_maxVertRegAngle;                        // 0x2dc
    float m_noVertRegAngle;                         // 0x2e0
    int m_pcoId;                                    // 0x2e4
    char _pad2e8[0x1c];
    VehicleCategory m_vehicleCategory;              // 0x304
    VehicleCategory m_controlsCategory;             // 0x308
    VehicleType m_vehicleType;                      // 0x30c
    int m_x310;
    bool m_artPos;                                  // 0x314
    std::vector<int> m_pcoPosIds;                   // 0x318
    char _pad330[0x1c];
    bool m_disableSpawnPointsOnEnter;               // 0x34c
    char _pad34d[0xb];
    bool m_toggleWeapon;                            // 0x358
    unsigned int m_cockpitLod;                      // 0x35c
    unsigned int m_cockpitSubGeom;                  // 0x360
    std::string m_soundFilter;                      // 0x368
    std::set<int> m_targetObjectTypesToWatch;       // 0x370
    float m_shakeFactor;                            // 0x3a0
    float m_sprintRecoverTime;                      // 0x3a4
    float m_sprintDissipationTime;                  // 0x3a8
    float m_sprintLimit;                            // 0x3ac
    float m_sprintFactor;                           // 0x3b0
    bool m_allowDucking;                            // 0x3b4
    bool m_disableInputWhileDucking;                // 0x3b5
    bool m_autoUseAbility;                          // 0x3b6
    dice::hfe::io::PlayerInputMap m_specialToggleWeaponInput; // 0x3b8
    float m_listenerObstruction;                    // 0x3bc
    float m_groundContactVolume;                    // 0x3c0
    float m_damagedAmbientSoundLimit;               // 0x3c4
    int m_crewKitIndex;                             // 0x3c8
    bool m_maintainCameraOnExit;                    // 0x3cc
    bool m_maintainCameraOnEnter;                   // 0x3cd
    bool m_neverDrawAs1p;                           // 0x3ce
    float m_boundingRadiusModifierWhenOccupied;     // 0x3d0
};

bool PlayerControlObjectTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;

    if (m_pcoId != -1)
        ss << "ObjectTemplate.setPcoId " << m_pcoId << std::endl;
    for (int i = 0; i < (int)m_pcoPosIds.size(); ++i)
        ss << "ObjectTemplate.addPcoPosId " << m_pcoPosIds[i] << std::endl;
    if (m_artPos)
        ss << "ObjectTemplate.artPos 1" << std::endl;
    if (m_soldierExitPosition.lengthSquare() > 0.0f || m_soldierExitRotation.lengthSquare() > 0.0f) {
        // TRICK: 420
        std::ostream& os = ss << "ObjectTemplate.setSoldierExitLocation ";
        os << m_soldierExitPosition.x << '/';
        os << m_soldierExitPosition.y << '/';
        std::ostream& os2 = os << m_soldierExitPosition.z << " ";
        os2 << m_soldierExitRotation.x << '/';
        os2 << m_soldierExitRotation.y << '/';
        os2 << m_soldierExitRotation.z << std::endl;
    }
    if (m_altSoldierExitPosition.lengthSquare() > 0.0f) {
        std::ostream& os = ss << "ObjectTemplate.altSoldierExitPosition ";
        os << m_altSoldierExitPosition.x << '/';
        os << m_altSoldierExitPosition.y << '/';
        os << m_altSoldierExitPosition.z << std::endl;
    }
    if (m_disableSpawnPointsOnEnter)
        ss << "ObjectTemplate.disableSpawnPointsOnEnter 1" << std::endl;
    if (m_dontClearTeamOnExit)
        ss << "ObjectTemplate.dontClearTeamOnExit 1" << std::endl;
    if (m_destroyOnExit)
        ss << "ObjectTemplate.destroyOnExit 1" << std::endl;
    if (m_dontAllowExit)
        ss << "ObjectTemplate.dontAllowExit 1" << std::endl;
    if (m_regulateYawInput != dice::hfe::io::PIM_Default) {
        ss << "ObjectTemplate.regulateYawInput " << m_regulateYawInput << std::endl;
        {
            std::ostream& os = ss << "ObjectTemplate.regulateYaw ";
            os << m_regulateYaw.x << '/';
            os << m_regulateYaw.y << std::endl;
        }
    }
    if (m_regulatePitchInput != dice::hfe::io::PIM_Default) {
        ss << "ObjectTemplate.regulatePitchInput " << m_regulatePitchInput << std::endl;
        {
            std::ostream& os = ss << "ObjectTemplate.regulatePitch ";
            os << m_regulatePitch.x << '/';
            os << m_regulatePitch.y << std::endl;
        }
    }
    if (m_regulateRollInput != dice::hfe::io::PIM_Default) {
        ss << "ObjectTemplate.regulateRollInput " << m_regulateRollInput << std::endl;
        {
            std::ostream& os = ss << "ObjectTemplate.regulateRoll ";
            os << m_regulateRoll.x << '/';
            os << m_regulateRoll.y << std::endl;
        }
    }
    if (m_regulateVerticalPosInput != dice::hfe::io::PIM_Default) {
        ss << "ObjectTemplate.regulateVerticalPosInput " << m_regulateVerticalPosInput << std::endl;
        {
            std::ostream& os = ss << "ObjectTemplate.regulateVerticalPos ";
            os << m_regulateVerticalPos.x << '/';
            os << m_regulateVerticalPos.y << std::endl;
        }
    }
    if (m_maxVertRegAngle != 10.0f)
        ss << "ObjectTemplate.maxVertRegAngle " << m_maxVertRegAngle << std::endl;
    if (m_noVertRegAngle != 20.0f)
        ss << "ObjectTemplate.noVertRegAngle " << m_noVertRegAngle << std::endl;
    if (m_seatName.length() != 0) {
        // TRICK: 408
        float z, y, x;
        getRotationZXY(m_seatMatrix, z, y, x);
        // TRICK: 419
        Vec3 const& rot = Vec3(-x, -y, -z);
        std::ostream& os = ss << "ObjectTemplate.seatInformation " << m_seatName << " ";
        os << m_seatMatrix.r[3].x << '/';
        os << m_seatMatrix.r[3].y << '/';
        os << m_seatMatrix.r[3].z << " " << rot << std::endl;
    }
    if (m_seatAnimationSystem)
        ss << "ObjectTemplate.seatAnimationSystem " << m_seatAnimationSystem->getName() << std::endl;
    if (m_seatLeftRotationLimit != 0.0f)
        ss << "ObjectTemplate.seatLeftRotationLimit " << m_seatLeftRotationLimit << std::endl;
    if (m_seatRightRotationLimit != 0.0f)
        ss << "ObjectTemplate.seatRightRotationLimit " << m_seatRightRotationLimit << std::endl;
    if (m_toggleWeapon)
        ss << "ObjectTemplate.toggleWeapon 1" << std::endl;
    if (m_soundFilter.length() != 0)
        ss << "ObjectTemplate.soundFilter " << m_soundFilter << std::endl;
    for (std::set<int>::const_iterator it = m_targetObjectTypesToWatch.begin(); it != m_targetObjectTypesToWatch.end(); ++it)
        ss << "ObjectTemplate.addTargetObjectTypeToWatch " << *it << std::endl;
    if (m_cockpitLod != 0)
        ss << "ObjectTemplate.cockpitLod " << m_cockpitLod << std::endl;
    if (m_cockpitSubGeom != 0)
        ss << "ObjectTemplate.cockpitSubGeom " << m_cockpitSubGeom << std::endl;
    if (m_shakeFactor != 1.0f)
        ss << "ObjectTemplate.shakeFactor " << m_shakeFactor << std::endl;
    if (m_sprintRecoverTime != 0.0f)
        ss << "ObjectTemplate.sprintRecoverTime " << m_sprintRecoverTime << std::endl;
    if (m_sprintDissipationTime != 0.0f)
        ss << "ObjectTemplate.sprintDissipationTime " << m_sprintDissipationTime << std::endl;
    if (m_sprintLimit != 0.0f)
        ss << "ObjectTemplate.sprintLimit " << m_sprintLimit << std::endl;
    if (m_sprintFactor != 2.5f)
        ss << "ObjectTemplate.sprintFactor " << m_sprintFactor << std::endl;
    if (m_specialToggleWeaponInput != dice::hfe::io::PIM_Default)
        ss << "ObjectTemplate.specialToggleWeaponInput " << m_specialToggleWeaponInput << std::endl;
    if (m_vehicleCategory != VCLand)
        ss << "ObjectTemplate.vehicleCategory " << m_vehicleCategory << std::endl;
    if (m_controlsCategory != VCDefaultControls)
        ss << "ObjectTemplate.controlsCategory " << m_controlsCategory << std::endl;
    if (m_vehicleType != VTNone)
        ss << "ObjectTemplate.setVehicleType " << m_vehicleType << std::endl;
    if (m_allowDucking)
        ss << "ObjectTemplate.allowDucking 1" << std::endl;
    if (!m_disableInputWhileDucking)
        ss << "ObjectTemplate.disableInputWhileDucking 0" << std::endl;
    if (m_listenerObstruction != 0.0f)
        ss << "ObjectTemplate.listenerObstruction " << m_listenerObstruction << std::endl;
    if (m_groundContactVolume != 0.0f)
        ss << "ObjectTemplate.groundContactVolume " << m_groundContactVolume << std::endl;
    if (m_damagedAmbientSoundLimit != 0.5f)
        ss << "ObjectTemplate.damagedAmbientSoundLimit " << m_damagedAmbientSoundLimit << std::endl;
    if (m_crewKitIndex != -1)
        ss << "ObjectTemplate.crewKitIndex " << m_crewKitIndex << std::endl;
    if (m_autoUseAbility)
        ss << "ObjectTemplate.autoUseAbility " << m_autoUseAbility << std::endl;
    if (m_hasRestrictedExit)
        ss << "ObjectTemplate.hasRestrictedExit 1" << std::endl;
    if (m_neverDrawAs1p)
        ss << "ObjectTemplate.neverDrawAs1p 1" << std::endl;
    if (m_maintainCameraOnExit)
        ss << "ObjectTemplate.maintainCameraOnExit " << m_maintainCameraOnExit << std::endl;
    if (m_maintainCameraOnEnter)
        ss << "ObjectTemplate.maintainCameraOnEnter " << m_maintainCameraOnEnter << std::endl;
    if (!(std::fabs(m_boundingRadiusModifierWhenOccupied) <= FLT_EPSILON))
        ss << "ObjectTemplate.boundingRadiusModifierWhenOccupied " << m_boundingRadiusModifierWhenOccupied << std::endl;

    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
