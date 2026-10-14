// FUNCTION: BF2 0x4e5540
// FUNCTION: BF2 0x4e5540
namespace dice { namespace hfe {

class DemoRecorder {
public:
    bool isRenderingToFile() const;
    bool isRenderingSound() const;
    bool isOpenForPlayback() const;
    void handlePlayerInput(float);
};

extern float* g_demo_useSlomoCam;

class Demo {
public:
    char pad0[0x8];
    void* m_8;
    DemoRecorder* m_recorder;
    void handlePlayerInput(int n);
};

void Demo::handlePlayerInput(int n)
{
    if (!m_recorder)
        return;
    if (!m_recorder->isRenderingToFile() && !m_recorder->isRenderingSound()
        && !m_recorder->isOpenForPlayback())
        return;
    float v = *(float*)m_8;
    if ((*g_demo_useSlomoCam > 0.0f) & (n > 0))
        v = v * ((float)n / 100.0f);
    m_recorder->handlePlayerInput(v);
}

} }
