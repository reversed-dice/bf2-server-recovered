// from api 73.68%
// FUNCTION: BF2 0x7f3320
namespace dice { namespace hfe { namespace io {
enum InputDeviceAxes { AXIS0, AXIS_MAX_ };
class FalconDevice {
    char _p[0x44];
    int m_count;
    char _p2[0x4c-0x48];
    int m_scales[16];
public:
    float getAxisScale(InputDeviceAxes axis) const;
};
float FalconDevice::getAxisScale(InputDeviceAxes axis) const
{
    return axis <= m_count ? *(float*)&m_scales[axis] : 0.0f;
}
} } }
