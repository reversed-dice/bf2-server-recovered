// FUNCTION: BF2 0x4e5730
namespace dice { namespace hfe {

class DemoRecorder {
public:
    char pad0[0x30];
    unsigned int m_30;
    char pad1[0xd];
    char m_41;
    bool isRenderingToFile() const;
    bool isRenderingSound() const;
};

class System {
public:
    void advanceExactTime(unsigned int);
};

extern System* g_system;

class Demo {
public:
    char pad0[0x10];
    DemoRecorder* m_recorder;
    bool overrideAdvanceTime();
};

bool Demo::overrideAdvanceTime()
{
    if (!m_recorder)
        return false;
    if (m_recorder->isRenderingToFile() || m_recorder->m_41) {
        g_system->advanceExactTime(1000000 / m_recorder->m_30);
        return true;
    }
    if (m_recorder->isRenderingSound()) {
        g_system->advanceExactTime(0x8235);
        return true;
    }
    return false;
}

} }
