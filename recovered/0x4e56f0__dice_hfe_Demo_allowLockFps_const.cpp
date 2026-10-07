// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x4e56f0
namespace dice { namespace hfe {

class DemoRecorder {
public:
    bool isRenderingToFile() const;
    char _pad[0x41];
    bool m_field41;
};

class Demo {
public:
    bool allowLockFps() const;
    char _pad[0x10];
    DemoRecorder* m_recorder;
};

bool Demo::allowLockFps() const
{
    if (m_recorder) {
        if (m_recorder->isRenderingToFile())
            return false;
        if (m_recorder->m_field41)
            return false;
    }
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_Demo_allowLockFps_const (0x4e56f0)
