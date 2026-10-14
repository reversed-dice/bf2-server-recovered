// FUNCTION: BF2 0x74a440
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern unsigned long long g_frequency;
extern unsigned long long g_deltaFraction;
extern unsigned long long g_oldTime;
extern unsigned long long g_simTimeFraction;
extern unsigned long long g_simTimeTicks;

class System
{
public:
    char m_pad0[0xc];
    int m_0c;        // 0xc
    double m_time;   // 0x10

    void advanceExactTime(unsigned int ticks);
};

void System::advanceExactTime(unsigned int ticks)
{
    unsigned long long t = (unsigned long long)ticks * g_frequency + g_deltaFraction;
    unsigned long long secs = t / 1000000ULL;

    g_oldTime += secs;
    g_deltaFraction = t % 1000000ULL;

    unsigned long long d = secs * (long long)m_0c + g_simTimeFraction;
    unsigned long long simTicks = d / 100ULL;

    g_simTimeTicks += simTicks;
    g_simTimeFraction = d % 100ULL;

    m_time = (double)g_simTimeTicks / (double)g_frequency;
}

} }
