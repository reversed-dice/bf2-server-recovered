// FUNCTION: BF2 0x7f3600
namespace dice { namespace hfe { namespace io {
class IAdvancedInputDevice {
public:
    void peakXYAxis(float& a, float& b);
};
void IAdvancedInputDevice::peakXYAxis(float& a, float& b) { b = 0.0f; a = 0.0f; }
} } }
// REVERSED_FUNCTION: dice_hfe_io_IAdvancedInputDevice_peakXYAxis_floatref_floatref (0x7f3600)
