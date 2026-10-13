// BF2_FLAGS: -fno-tree-loop-optimize
// FUNCTION: BF2 0x7a5bb0
namespace dice { namespace hfe {

struct TickCalculator {
    float  m_step;
    int    m_maxTicks;
    double m_last;
    double m_prev;
    double m_next;
    int compute(double time);
};

int TickCalculator::compute(double time)
{
    double delta = time - m_last;
    float step = m_step;
    if (delta < step)
        return 0;
    delta -= step;
    int ticks = 0;
    while (delta >= 0.0 && ticks <= m_maxTicks) {
        delta -= step;
        ++ticks;
    }
    if (ticks > 0) {
        m_prev = m_next;
        m_last += ticks * m_step;
        m_next = m_last + m_step;
    }
    if (ticks > m_maxTicks) {
        ticks = m_maxTicks;
        m_last = time;
        m_prev = time;
        m_next = time;
    }
    return ticks;
}

} }
