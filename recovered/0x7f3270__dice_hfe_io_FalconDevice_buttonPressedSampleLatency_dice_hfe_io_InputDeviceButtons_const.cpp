// FUNCTION: BF2 0x7f3270
namespace dice { namespace hfe { namespace io {

enum InputDeviceButtons {};

class FalconDevice {
public:
    float buttonPressedSampleLatency(InputDeviceButtons buttons) const;
    char _pad0[0x5c];
    float m_latency[32];
};

float FalconDevice::buttonPressedSampleLatency(InputDeviceButtons buttons) const
{
    for (unsigned int i = 0; i < 32; ++i) {
        if ((buttons >> i) & 1)
            return m_latency[i];
    }
    return 0.0f;
}

} } }
