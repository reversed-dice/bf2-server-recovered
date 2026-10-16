// FUNCTION: BF2 0x7f35a0
extern void* dice_hfe_io_controlMapManager;

namespace dice { namespace hfe { namespace io {

class FalconDevice {
public:
    char _pad0[0xc];
    int m_c;
    char _pad1[0x8];
    int m_18;
    char _pad2[0x4];
    double m_20;
    double m_28;
    double m_30;
    char _pad3[0xa8];
    int m_e0;
    void updateCurrentState(float dt);
};

} } }

typedef void (*Fn68)(void*);

void dice::hfe::io::FalconDevice::updateCurrentState(float dt) {
    Fn68 f = (Fn68)(*(void***)dice_hfe_io_controlMapManager)[0x68/8];
    f(dice_hfe_io_controlMapManager);
    float ms = dt * 1000.0f;
    m_18 = m_c;
    m_20 = m_28 = m_30 = 0;
    m_e0 += (int)(long)ms;
}
