// FUNCTION: BF2 0x588720
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
    // TRICK: 75
    bool isZero() const
    {
        return std::fabs(x) <= FLT_EPSILON && std::fabs(y) <= FLT_EPSILON && std::fabs(z) <= FLT_EPSILON;
    }
};

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

class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    char _pad0[0x1f4];
};

class RotationalBundleTemplate : public BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    Vec3 m_minRotation;                     // 0x1f4
    Vec3 m_maxRotation;                     // 0x200
    Vec3 m_pivotPosition;                   // 0x20c
    Vec3 m_maxSpeed;                        // 0x218
    Vec3 m_maxResetSpeed;                   // 0x224
    Vec3 m_acceleration;                    // 0x230
    Vec3 m_deAcceleration;                  // 0x23c
    Vec3 m_continousRotationSpeed;          // 0x248
    dice::hfe::io::PlayerInputMap m_inputToYaw;   // 0x254
    dice::hfe::io::PlayerInputMap m_inputToPitch; // 0x258
    dice::hfe::io::PlayerInputMap m_inputToRoll;  // 0x25c
    bool m_automaticReset;                  // 0x260
    bool m_snapToZeroOnNoInput;             // 0x261
    bool m_useDeAcceleration;               // 0x262
    bool m_restoreRotationOnExit;           // 0x263
    bool m_automaticYawStabilization;       // 0x264
    bool m_automaticPitchStabilization;     // 0x265
    bool m_rememberExcessInput;             // 0x266
    float m_lesserYawAtSpeed;               // 0x268
    bool m_startAutoRotateOnEnter;          // 0x26c
    Vec2 m_regulateYaw;                     // 0x270
    Vec2 m_regulatePitch;                   // 0x278
    Vec2 m_regulateRoll;                    // 0x280
};

bool RotationalBundleTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;

    if (!m_minRotation.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setMinRotation ";
        os << m_minRotation.x << '/';
        os << m_minRotation.y << '/';
        os << m_minRotation.z << std::endl;
    }
    if (!m_maxRotation.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setMaxRotation ";
        os << m_maxRotation.x << '/';
        os << m_maxRotation.y << '/';
        os << m_maxRotation.z << std::endl;
    }
    if (!m_pivotPosition.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setPivotPosition ";
        os << m_pivotPosition.x << '/';
        os << m_pivotPosition.y << '/';
        os << m_pivotPosition.z << std::endl;
    }
    if (!m_maxSpeed.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setMaxSpeed ";
        os << m_maxSpeed.x << '/';
        os << m_maxSpeed.y << '/';
        os << m_maxSpeed.z << std::endl;
    }
    if (!m_maxResetSpeed.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setMaxResetSpeed ";
        os << m_maxResetSpeed.x << '/';
        os << m_maxResetSpeed.y << '/';
        os << m_maxResetSpeed.z << std::endl;
    }
    if (!m_acceleration.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setAcceleration ";
        os << m_acceleration.x << '/';
        os << m_acceleration.y << '/';
        os << m_acceleration.z << std::endl;
    }
    if (!m_deAcceleration.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setDeAcceleration ";
        os << m_deAcceleration.x << '/';
        os << m_deAcceleration.y << '/';
        os << m_deAcceleration.z << std::endl;
    }
    if (!m_continousRotationSpeed.isZero())
        {
        std::ostream& os = ss << "ObjectTemplate.setContinousRotationSpeed ";
        os << m_continousRotationSpeed.x << '/';
        os << m_continousRotationSpeed.y << '/';
        os << m_continousRotationSpeed.z << std::endl;
    }
    if (m_inputToYaw != dice::hfe::io::PIM_Default)
        ss << "ObjectTemplate.setInputToYaw " << m_inputToYaw << std::endl;
    if (m_inputToPitch != dice::hfe::io::PIM_Default)
        ss << "ObjectTemplate.setInputToPitch " << m_inputToPitch << std::endl;
    if (m_inputToRoll != dice::hfe::io::PIM_Default)
        ss << "ObjectTemplate.setInputToRoll " << m_inputToRoll << std::endl;
    if (m_automaticReset)
        ss << "ObjectTemplate.setAutomaticReset " << m_automaticReset << std::endl;
    if (m_snapToZeroOnNoInput)
        ss << "ObjectTemplate.snapToZeroOnNoInput " << m_snapToZeroOnNoInput << std::endl;
    if (m_useDeAcceleration)
        ss << "ObjectTemplate.setUseDeAcceleration " << m_useDeAcceleration << std::endl;
    if (m_automaticYawStabilization)
        ss << "ObjectTemplate.automaticYawStabilization " << m_automaticYawStabilization << std::endl;
    if (m_automaticPitchStabilization)
        ss << "ObjectTemplate.automaticPitchStabilization " << m_automaticPitchStabilization << std::endl;
    if (!(std::fabs(m_lesserYawAtSpeed) <= FLT_EPSILON))
        ss << "ObjectTemplate.setLesserYawAtSpeed " << m_lesserYawAtSpeed << std::endl;
    if (m_rememberExcessInput)
        ss << "ObjectTemplate.rememberExcessInput " << m_rememberExcessInput << std::endl;
    if (m_startAutoRotateOnEnter)
        ss << "ObjectTemplate.startAutoRotateOnEnter 1" << std::endl;
    if (!(std::fabs(m_regulateYaw.x) + std::fabs(m_regulateYaw.y) <= FLT_EPSILON))
        {
        std::ostream& os = ss << "ObjectTemplate.regulateYaw ";
        os << m_regulateYaw.x << '/';
        os << m_regulateYaw.y << std::endl;
    }
    if (!(std::fabs(m_regulatePitch.x) + std::fabs(m_regulatePitch.y) <= FLT_EPSILON))
        {
        std::ostream& os = ss << "ObjectTemplate.regulatePitch ";
        os << m_regulatePitch.x << '/';
        os << m_regulatePitch.y << std::endl;
    }
    if (!(std::fabs(m_regulateRoll.x) + std::fabs(m_regulateRoll.y) <= FLT_EPSILON))
        {
        std::ostream& os = ss << "ObjectTemplate.regulateRoll ";
        os << m_regulateRoll.x << '/';
        os << m_regulateRoll.y << std::endl;
    }
    if (m_restoreRotationOnExit)
        ss << "ObjectTemplate.restoreRotationOnExit " << m_restoreRotationOnExit << std::endl;

    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
