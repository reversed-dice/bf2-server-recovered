// FUNCTION: BF2 0x7f3350
namespace dice { namespace hfe { namespace io {
class FalconDevice {
public:
    char _pad[0x20];
    double m_dbl[7];
    unsigned char m_flags[64];
    float readAxis(int a, bool inv) const;
};
float FalconDevice::readAxis(int a, bool) const {
    if (m_flags[a]) return -(float)m_dbl[a];
    return (float)m_dbl[a];
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_FalconDevice_readAxis_dice_hfe_io_InputDeviceAxes_bool_const (0x7f3350)
