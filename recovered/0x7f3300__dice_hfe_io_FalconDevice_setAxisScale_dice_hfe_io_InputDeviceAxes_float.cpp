// FUNCTION: BF2 0x7f3300
namespace dice {
namespace hfe {
namespace io {

enum InputDeviceAxes {};

class FalconDevice {
public:
    char pad_0[0x44];
    int m_maxAxis;
    int pad_48;
    float m_axisScales[1];

    void setAxisScale(InputDeviceAxes axis, float scale);
};

void FalconDevice::setAxisScale(InputDeviceAxes axis, float scale) {
    if ((int)axis <= m_maxAxis) {
        m_axisScales[(int)axis] = scale;
    }
}

}
}
}
