// FUNCTION: BF2 0x6310f0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

enum PlayerInputMap { PIM_Default = 0x40 };
std::ostream& operator<<(std::ostream& os, PlayerInputMap map);

}

class EngineSoundTemplate {
public:
    void serialize(std::ostream& os);
    char _pad0[0x10];
};

namespace world {

enum EngineType {
    c_ETPlane = 1, c_ETCar = 2, c_ETTank = 6, c_ETShip = 9, c_ETRocket = 0x11,
    c_ETTorpedo = 0x19, c_ETHelicopter = 0x21, c_ETNewCar = 0x42, c_ETNewTank = 0x46,
    c_ETNewCar2 = 0xc2
};
std::ostream& operator<<(std::ostream& os, EngineType type);

struct Curve {
    float m_scale;
    float m_values[101];
    // TRICK: 75
    float get(int i) const { return m_values[i]; }
};

// TRICK: 419
inline bool isEqual(float a, float b) { return std::fabs(a - b) <= FLT_EPSILON; }

class RotationalBundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    char _pad0[0x29c];
};

class EngineTemplate : public RotationalBundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    Curve m_torqueCurve;                    // 0x29c
    char _pad434[0x14];
    int m_numberOfGears;                    // 0x448
    float m_differential;                   // 0x44c
    float m_torque;                         // 0x450
    float m_gearUp;                         // 0x454
    float m_gearDown;                       // 0x458
    float m_gearChangeTime;                 // 0x45c
    Curve m_gearRatios;                     // 0x460
    char _pad5f8[0x14];
    float m_noPropellerEffectAtSpeed;       // 0x60c
    EngineType m_engineType;                // 0x610
    float m_heatIncrement;                  // 0x614
    float m_coolingFactor;                  // 0x618
    int m_heatBarType;                      // 0x61c
    bool m_inverseHeatBar;                  // 0x620
    int m_propRotAxis;                      // 0x624
    bool m_accumulate;                      // 0x628
    bool m_pureRotational;                  // 0x629
    float m_horizontalSpeedMagnifier;       // 0x62c
    float m_maxAngleOfAttack;               // 0x630
    float m_defaultAngleOfAttack;           // 0x634
    float m_attackSpeed;                    // 0x638
    dice::hfe::io::PlayerInputMap m_remoteEngineInput; // 0x63c
    bool m_decreaseAngleToZero;             // 0x640
    float m_spinWhenNoEngineInAir;          // 0x644
    bool m_constantRpm;                     // 0x648
    float m_horizontalDampAngle;            // 0x64c
    float m_horizontalDampAngleFactor;      // 0x650
    float m_dampHorizontalVel;              // 0x654
    float m_dampHorizontalVelFactor;        // 0x658
    float m_decreaseAngleToZeroVerticalVel; // 0x65c
    float m_x660;
    float m_airFlowAffect;                  // 0x664
    float m_noEffectAtPerpSpeed;            // 0x668
    bool m_canReverse;                      // 0x66c
    float m_trackTurnLowAmplitude;          // 0x670
    float m_trackTurnLowOffset;             // 0x674
    float m_trackTurnHighAmplitude;         // 0x678
    float m_trackTurnHighOffset;            // 0x67c
    float m_trackTurnAcceleration;          // 0x680
    float m_trackTurnSpeed;                 // 0x684
    char _pad688[0x18];
    float m_minRpm;                         // 0x6a0
    float m_maxRpm;                         // 0x6a4
    bool m_useClutchedTorque;               // 0x6a8
    float m_wheelInertia;                   // 0x6ac
    float m_engineFeedbackMod;
    float m_brakeTorque;
    float m_engineBrakeTorque;
    float m_frictionTorque;
    float m_frictionMod;
    float m_slopeTorqueMod;
    float m_wheelLongFrictionMod;
    float m_wheelLongDriveFrictionMod;
    float m_wheelLongPeakAt;
    float m_wheelLongMinDynamicFriction;
    float m_wheelLongScale;
    float m_wheelLatFrictionMod;
    float m_wheelLatDriveFrictionMod;
    float m_wheelLatPeakAt;
    float m_wheelLatMinDynamicFriction;
    float m_wheelLatScale;                  // 0x6ec
    dice::hfe::EngineSoundTemplate m_engineSound; // 0x6f0
};

bool EngineTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (!RotationalBundleTemplate::makeScript(stream))
        return false;

    ss << "ObjectTemplate.setEngineType " << m_engineType << std::endl;
    ss << "ObjectTemplate.setTorque " << m_torque << std::endl;
    ss << "ObjectTemplate.setDifferential " << m_differential << std::endl;
    if (m_numberOfGears != 1)
        ss << "ObjectTemplate.setNumberOfGears " << m_numberOfGears << std::endl;
    if (m_gearUp != 0.3f)
        ss << "ObjectTemplate.setGearUp " << m_gearUp << std::endl;
    if (m_gearDown != 0.7f)
        ss << "ObjectTemplate.setGearDown " << m_gearDown << std::endl;
    if (m_gearChangeTime != 1.0f)
        ss << "ObjectTemplate.setGearChangeTime " << m_gearChangeTime << std::endl;
    if (m_gearRatios.get(20) != 3.5f || m_gearRatios.get(40) != 2.2f
        || m_gearRatios.get(60) != 1.5f || m_gearRatios.get(80) != 1.1f
        || m_gearRatios.get(100) != 0.94f)
        ss << "ObjectTemplate.setGearRatios " << m_gearRatios.get(20) << " "
           << m_gearRatios.get(40) << " " << m_gearRatios.get(60) << " "
           << m_gearRatios.get(80) << " " << m_gearRatios.get(100) << " " << std::endl;
    if (m_noPropellerEffectAtSpeed != 100.0f)
        ss << "ObjectTemplate.noPropellerEffectAtSpeed " << m_noPropellerEffectAtSpeed << std::endl;
    if (m_noPropellerEffectAtSpeed != 100.0f)
        ss << "ObjectTemplate.noPropellerEffectAtSpeed " << m_noPropellerEffectAtSpeed << std::endl;
    if (m_propRotAxis != 2)
        ss << "ObjectTemplate.propRotAxis " << m_propRotAxis << std::endl;
    if (m_horizontalSpeedMagnifier != 1.0f)
        ss << "ObjectTemplate.horizontalSpeedMagnifier " << m_horizontalSpeedMagnifier << std::endl;
    if (m_horizontalDampAngle != -1.0f)
        ss << "ObjectTemplate.horizontalDampAngle " << m_horizontalDampAngle << std::endl;
    if (m_horizontalDampAngleFactor != 1.0f)
        ss << "ObjectTemplate.horizontalDampAngleFactor " << m_horizontalDampAngleFactor << std::endl;
    if (m_defaultAngleOfAttack != 0.0f)
        ss << "ObjectTemplate.defaultAngleOfAttack " << m_defaultAngleOfAttack << std::endl;
    if (m_maxAngleOfAttack != 20.0f)
        ss << "ObjectTemplate.maxAngleOfAttack " << m_maxAngleOfAttack << std::endl;
    if (m_attackSpeed != 0.0f)
        ss << "ObjectTemplate.attackSpeed " << m_attackSpeed << std::endl;
    if (m_accumulate)
        ss << "ObjectTemplate.accumulate " << m_accumulate << std::endl;
    if (m_decreaseAngleToZero)
        ss << "ObjectTemplate.decreaseAngleToZero " << m_decreaseAngleToZero << std::endl;
    if (m_decreaseAngleToZeroVerticalVel != 0.0f)
        ss << "ObjectTemplate.decreaseAngleToZeroVerticalVel " << m_decreaseAngleToZeroVerticalVel << std::endl;
    if (m_remoteEngineInput != dice::hfe::io::PIM_Default)
        ss << "ObjectTemplate.remoteEngineInput " << m_remoteEngineInput << std::endl;
    if (m_pureRotational)
        ss << "ObjectTemplate.pureRotational " << m_pureRotational << std::endl;
    if (m_constantRpm)
        ss << "ObjectTemplate.constantRpm " << m_constantRpm << std::endl;
    if (m_heatIncrement != -1.0f) {
        ss << "ObjectTemplate.HeatIncrement " << m_heatIncrement << std::endl;
        if (m_coolingFactor != 0.0f)
            ss << "ObjectTemplate.CoolingFactor " << m_coolingFactor << std::endl;
        if (m_heatBarType != 4) {
            if (m_heatBarType == 5)
                ss << "ObjectTemplate.setHeatBarType G" << std::endl;
            else
                ss << "ObjectTemplate.setHeatBarType B" << std::endl;
        }
        if (!m_inverseHeatBar)
            ss << "ObjectTemplate.InverseHeatBar 1" << std::endl;
    }
    if (m_spinWhenNoEngineInAir != 0.0f)
        ss << "ObjectTemplate.spinWhenNoEngineInAir " << m_spinWhenNoEngineInAir << std::endl;
    if (m_dampHorizontalVel != 0.0f)
        ss << "ObjectTemplate.dampHorizontalVel " << m_dampHorizontalVel << std::endl;
    if (m_dampHorizontalVelFactor != 0.0f)
        ss << "ObjectTemplate.dampHorizontalVelFactor " << m_dampHorizontalVelFactor << std::endl;
    if (m_airFlowAffect != 0.0f)
        ss << "ObjectTemplate.airFlowAffect " << m_airFlowAffect << std::endl;
    if (m_noEffectAtPerpSpeed != 10000.0f)
        ss << "ObjectTemplate.noEffectAtPerpSpeed " << m_noEffectAtPerpSpeed << std::endl;
    if (!m_canReverse)
        ss << "ObjectTemplate.canReverse 0" << std::endl;
    if (!isEqual(m_trackTurnLowAmplitude, 2.0f))
        ss << "ObjectTemplate.trackTurnLowAmplitude " << m_trackTurnLowAmplitude << std::endl;
    if (!isEqual(m_trackTurnLowOffset, -1.5f))
        ss << "ObjectTemplate.trackTurnLowOffset " << m_trackTurnLowOffset << std::endl;
    if (!isEqual(m_trackTurnHighAmplitude, 1.3f))
        ss << "ObjectTemplate.trackTurnHighAmplitude " << m_trackTurnHighAmplitude << std::endl;
    if (!isEqual(m_trackTurnHighOffset, 0.45f))
        ss << "ObjectTemplate.trackTurnHighOffset " << m_trackTurnHighOffset << std::endl;
    if (!isEqual(m_trackTurnAcceleration, 120.0f))
        ss << "ObjectTemplate.trackTurnAcceleration " << m_trackTurnAcceleration << std::endl;
    if (!isEqual(m_trackTurnSpeed, 1.5f))
        ss << "ObjectTemplate.trackTurnSpeed " << m_trackTurnSpeed << std::endl;
    if ((m_engineType & c_ETNewCar2) == c_ETNewCar2) {
        ss << "ObjectTemplate.newCar2." << "minRpm " << m_minRpm << std::endl;
        ss << "ObjectTemplate.newCar2." << "maxRpm " << m_maxRpm << std::endl;
        ss << "ObjectTemplate.newCar2." << "useClutchedTorque " << m_useClutchedTorque << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelInertia " << m_wheelInertia << std::endl;
        ss << "ObjectTemplate.newCar2." << "engineFeedbackMod " << m_engineFeedbackMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "brakeTorque " << m_brakeTorque << std::endl;
        ss << "ObjectTemplate.newCar2." << "engineBrakeTorque " << m_engineBrakeTorque << std::endl;
        ss << "ObjectTemplate.newCar2." << "frictionTorque " << m_frictionTorque << std::endl;
        ss << "ObjectTemplate.newCar2." << "frictionMod " << m_frictionMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "slopeTorqueMod " << m_slopeTorqueMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLongFrictionMod " << m_wheelLongFrictionMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLongDriveFrictionMod " << m_wheelLongDriveFrictionMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLongPeakAt " << m_wheelLongPeakAt << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLongMinDynamicFriction " << m_wheelLongMinDynamicFriction << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLongScale " << m_wheelLongScale << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLatFrictionMod " << m_wheelLatFrictionMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLatDriveFrictionMod " << m_wheelLatDriveFrictionMod << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLatPeakAt " << m_wheelLatPeakAt << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLatMinDynamicFriction " << m_wheelLatMinDynamicFriction << std::endl;
        ss << "ObjectTemplate.newCar2." << "wheelLatScale " << m_wheelLatScale << std::endl;
    }
    m_engineSound.serialize(ss);

    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
