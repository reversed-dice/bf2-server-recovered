// FUNCTION: BF2 0x6d6d60
namespace dice { namespace hfe { namespace world {

namespace {
    float* g_phyLatencyCompensationDefault;
    float* g_phyLatencyCompensationMax;
}

class LatencyCompensation {
public:
    static bool m_isEnabled;
    static float convertLatency(float f);
};

float LatencyCompensation::convertLatency(float f)
{
    float r = 0.0f;
    if (m_isEnabled) {
        float s = *g_phyLatencyCompensationDefault + f;
        r = s;
        if (s > *g_phyLatencyCompensationMax)
            r = *g_phyLatencyCompensationMax;
    }
    return r;
}

} } }
