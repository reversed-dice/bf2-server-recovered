// FUNCTION: BF2 0x7626d0
namespace dice {
namespace hfe {

class Vars {
public:
    static float* getFloat(char const* name, float def);
};

class EngineSoundTemplate {
public:
    int m_pad0;
    float m_freqFirst; // 0x4
    float m_freqLast;  // 0x8
    float m_ampFirst;  // 0xc
    float m_ampLast;   // 0x10
    float m_timeFirst; // 0x14
    float m_timeLast;  // 0x18
    float m_tweak;     // 0x1c

    void reset();
};

void EngineSoundTemplate::reset() {
    m_freqFirst = *Vars::getFloat("engine-audio-sway-frequency-first", 80.0f);
    m_freqLast = *Vars::getFloat("engine-audio-sway-frequency-last", 35.0f);
    m_ampFirst = *Vars::getFloat("engine-audio-sway-amplitude-first", 0.05f);
    m_ampLast = *Vars::getFloat("engine-audio-sway-amplitude-last", 0.01f);
    m_timeFirst = *Vars::getFloat("engine-audio-sway-time-first", 0.7f);
    m_timeLast = *Vars::getFloat("engine-audio-sway-time-last", 0.7f);
    m_tweak = *Vars::getFloat("engine-audio-material-tweak", 10.0f);
}

} // namespace hfe
} // namespace dice
