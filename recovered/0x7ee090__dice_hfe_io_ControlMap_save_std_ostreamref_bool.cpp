// FUNCTION: BF2 0x7ee090
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

enum GameInputMap { GameInputMap_0 };
enum PlayerInputMap { PlayerInputMap_0 };
enum InputDeviceFlags { InputDeviceFlags_0 };
enum InputDeviceKeys { InputDeviceKeys_0 };
enum InputDeviceAxes { InputDeviceAxes_0 };
enum InputDeviceButtons { InputDeviceButtons_0 };

std::ostream& operator<<(std::ostream& os, GameInputMap v);
std::ostream& operator<<(std::ostream& os, PlayerInputMap v);
std::ostream& operator<<(std::ostream& os, InputDeviceFlags v);
std::ostream& operator<<(std::ostream& os, InputDeviceKeys v);
std::ostream& operator<<(std::ostream& os, InputDeviceAxes v);
std::ostream& operator<<(std::ostream& os, InputDeviceButtons v);

struct AxisMapping {
    InputDeviceFlags device;
    int kind;
    int _8;
    InputDeviceAxes axis;
    InputDeviceButtons buttonA;
    InputDeviceButtons buttonB;
    InputDeviceKeys keyA;
    InputDeviceKeys keyB;
    char _20[0x30];
    bool invert;
    char _51[7];
};

struct AxisRemap {
    AxisMapping primary;
    AxisMapping secondary;
};

struct TriggerMapping {
    InputDeviceFlags device;
    int kind;
    InputDeviceButtons button;
    InputDeviceKeys key;
    int axisOption;
    InputDeviceAxes axis;
    char _18[0x10];
    float threshold;
    int _2c;
};

struct TriggerRemap {
    TriggerMapping primary;
    TriggerMapping secondary;
};

class IControlMapManager {
public:
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
    virtual void a12(); virtual void a13(); virtual void a14();
    virtual float getDefaultThreshold(int input, bool player);
};
extern IControlMapManager* controlMapManager;

class ControlMap {
public:
    virtual ~ControlMap();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual std::string const& getName() const;
    void save(std::ostream& os, bool player);
    float getAxisScale(InputDeviceAxes a) const { return m_axisScale[a]; }
private:
    char _pad0x08[0x08];
    std::string m_name;
    char _pad0x18[0x08];
    std::map<int, AxisRemap*> m_axisMap;
    std::map<int, TriggerRemap*> m_triggerMap;
    char _pad0x80[0x0c];
    bool m_invertMouse;
    float m_mouseSensitivity;
    float m_keyboardSensitivity;
    float m_axisScale[4];
    float m_yawFactor;
    float m_pitchFactor;
    std::vector<TriggerMapping*> m_mappings;
};

void ControlMap::save(std::ostream& os, bool player)
{
    if (m_axisMap.empty() && m_triggerMap.empty())
        return;

    os << "ControlMap.create " << getName() << std::endl;

    for (std::map<int, AxisRemap*>::iterator it = m_axisMap.begin(); it != m_axisMap.end(); ++it) {
        AxisRemap* r = it->second;
        std::ostringstream ss;
        if (player)
            ss << (PlayerInputMap)it->first;
        else
            ss << (GameInputMap)it->first;
        for (int i = 0; i < 2; ++i) {
            AxisMapping& m = i == 0 ? r->primary : r->secondary;
            if (m.device == 0)
                continue;
            if (m.device == 2)
                os << "ControlMap.addKeysToAxisMapping " << "c_" << ss.str() << " " << (InputDeviceFlags)2
                   << " " << m.keyA << " " << m.keyB << " " << i << std::endl;
            else if (m.kind == 1)
                os << "ControlMap.addAxisToAxisMapping " << "c_" << ss.str() << " " << m.device
                   << " " << m.axis << " " << m.invert << " " << i << std::endl;
            else if (m.kind == 2)
                os << "ControlMap.addButtonsToAxisMapping " << "c_" << ss.str() << " " << m.device
                   << " " << m.buttonA << " " << m.buttonB << " " << i << std::endl;
        }
    }

    for (std::map<int, TriggerRemap*>::iterator it = m_triggerMap.begin(); it != m_triggerMap.end(); ++it) {
        TriggerRemap* r = it->second;
        float threshold = controlMapManager->getDefaultThreshold(it->first, player);
        std::ostringstream ss;
        if (player)
            ss << (PlayerInputMap)it->first;
        else
            ss << (GameInputMap)it->first;
        for (int i = 0; i < 2; ++i) {
            TriggerMapping& m = i == 0 ? r->primary : r->secondary;
            if (m.device == 0)
                continue;
            if (m.threshold == 1000.0f)
                threshold = 1000.0f;
            if (m.device == 2)
                os << "ControlMap.addKeyToTriggerMapping " << "c_" << ss.str() << " " << (InputDeviceFlags)2
                   << " " << m.key << " " << threshold << " " << i << std::endl;
            else if (m.kind == 1)
                os << "ControlMap.addAxisToTriggerMapping " << (m.axisOption == 2 ? "-1 " : "") << "c_" << ss.str()
                   << " " << (m.axisOption == 1 ? "-1 " : "") << m.device << " " << m.axis << " " << i << std::endl;
            else if (m.kind == 2)
                os << "ControlMap.addButtonToTriggerMapping " << "c_" << ss.str() << " " << m.device
                   << " " << m.button << " " << threshold << " " << i << std::endl;
        }
    }

    for (unsigned int i = 0; i < m_mappings.size(); ++i) {
        TriggerMapping* m = m_mappings[i];
        os << "ControlMap.addKeyToTriggerMapping " << "c_PINone " << m->device << " " << m->key
           << " " << 0 << " " << 0 << std::endl;
    }

    if (m_invertMouse)
        os << "ControlMap.invertMouse " << m_invertMouse << std::endl;
    if (m_mouseSensitivity != 1.0f)
        os << "ControlMap.mouseSensitivity " << m_mouseSensitivity << std::endl;
    if (m_keyboardSensitivity != 0.1f)
        os << "ControlMap.keyboardSensitivity " << m_keyboardSensitivity << std::endl;
    if (m_yawFactor != 1.0f)
        os << "ControlMap.setYawFactor " << m_yawFactor << std::endl;
    if (m_pitchFactor != 1.0f)
        os << "ControlMap.setPitchFactor " << m_pitchFactor << std::endl;
    for (int i = 0; i < 4; ++i)
        if (getAxisScale((InputDeviceAxes)i) != 0.03f)
            os << "ControlMap.setAxisScale " << i << " " << getAxisScale((InputDeviceAxes)i) << std::endl;
    os << std::endl;
}

} } }
