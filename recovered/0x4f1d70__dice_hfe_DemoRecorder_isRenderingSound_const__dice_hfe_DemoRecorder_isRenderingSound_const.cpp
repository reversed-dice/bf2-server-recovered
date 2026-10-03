// FUNCTION: BF2 0x4f1d70
namespace dice { namespace hfe {

class DemoRecorder {
public:
    bool isRenderingSound() const;
private:
    void* vptr;          // offset 0x00
    unsigned int m_state; // offset 0x08
};

bool DemoRecorder::isRenderingSound() const {
    return m_state == 3;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_isRenderingSound_const (0x4f1d70)