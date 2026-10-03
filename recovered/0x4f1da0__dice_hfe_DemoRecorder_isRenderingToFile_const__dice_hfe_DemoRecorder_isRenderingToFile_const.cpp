// FUNCTION: BF2 0x4f1da0
namespace dice { namespace hfe {

class DemoRecorder {
    unsigned char m_pad[0xC0];
    unsigned int m_renderToFileState;
public:
    bool isRenderingToFile() const;
};

bool DemoRecorder::isRenderingToFile() const {
    return m_renderToFileState == 3;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_isRenderingToFile_const (0x4f1da0)