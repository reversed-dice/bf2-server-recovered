// FUNCTION: BF2 0x6027e0
namespace dice { namespace hfe {

struct WorldPref {
    static unsigned int getTickCount();
};

namespace world {

class DefaultSoundComp {
public:
    char _pad0[0x40];
    void* m_40[10];
    char _pad90[0xa0 - 0x90];
    int m_a0;
    bool m_a4;
    bool m_a5;
    char _pad_a6;
    bool m_a7;
    bool m_a8;
    bool m_a9;
    char _pad_aa[2];
    unsigned int m_ac;
    bool isBackstepping() const;
    bool is1P();
    void enable();
};

void DefaultSoundComp::enable() {
    if (m_a9)
        return;
    m_a9 = 1;
    if (!isBackstepping()) {
        if (WorldPref::getTickCount() - m_ac > 9) {
            int i = !is1P() ? 9 : 8;
            void* p = m_40[i];
            if (p)
                ((void (*)(void*))(*(void***)p)[4])(p);
        }
        m_ac = WorldPref::getTickCount();
    }
    m_a0 = 0;
    m_a8 = 0;
    m_a4 = 0;
    m_a7 = 0;
    m_a5 = 0;
}

} }
}
