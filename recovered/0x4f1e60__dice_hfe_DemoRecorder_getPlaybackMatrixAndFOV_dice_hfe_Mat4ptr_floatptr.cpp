// FUNCTION: BF2 0x4f1e60
namespace dice { namespace hfe {
class Mat4;
extern "C" void fn_004f6e70(void* p, Mat4* m, float* f, float v);
class DemoRecorder {
public:
    char _pad[0xa0];
    void* m_a0;
    char _pad2[4];
    float m_ac;
    void getPlaybackMatrixAndFOV(Mat4* m, float* f);
};
void DemoRecorder::getPlaybackMatrixAndFOV(Mat4* m, float* f) {
    if (!m_a0) return;
    fn_004f6e70(m_a0, m, f, m_ac);
}
} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_getPlaybackMatrixAndFOV_dice_hfe_Mat4ptr_floatptr (0x4f1e60)
