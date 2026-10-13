// FUNCTION: BF2 0x732890
#include <math.h>
#include <algorithm>
namespace dice { namespace hfe {

class PController {
public:
    void update(int dt);
    const float* m_target;
    float m_value;
    float m_gain;
};

void PController::update(int dt)
{
    if (!m_target)
        return;
    float diff = *m_target - m_value;
    if (fabsf(diff) < 1e-05f)
        return;
    if (diff > 0.0f) {
        float d = dt * diff * m_gain;
        m_value += diff < d ? diff : d;
        if (fabsf(m_value) < 0.0001f)
            m_value = 0.0f;
    } else if (diff < 0.0f) {
        float d = dt * diff * m_gain;
        m_value += d > diff ? d : diff;
        if (fabsf(m_value) < 0.0001f)
            m_value = 0.0f;
    }
}

} }
