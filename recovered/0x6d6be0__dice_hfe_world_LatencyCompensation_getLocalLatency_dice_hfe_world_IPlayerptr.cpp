// FUNCTION: BF2 0x6d6be0
namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22)
#undef V
    virtual bool isAIPlayer();
};

extern int* g_useFixedLatency;
extern int* g_useMeasuredLatency;
extern float* g_maxLatency;
extern int g_latencyTicks;
extern float g_tickTime;
extern float g_fixedLatency;

class LatencyCompensation {
public:
    static float getLocalLatency(IPlayer* p);
};

float LatencyCompensation::getLocalLatency(IPlayer* p)
{
    if (!p || p->isAIPlayer())
        return 0.0f;
    float l = 0.0f;
    if (*g_useFixedLatency)
        l += g_fixedLatency;
    if (*g_useMeasuredLatency) {
        float m = *g_maxLatency;
        float x = g_latencyTicks * g_tickTime;
        l += m < x ? m : x;
    }
    return l;
}

} } }
