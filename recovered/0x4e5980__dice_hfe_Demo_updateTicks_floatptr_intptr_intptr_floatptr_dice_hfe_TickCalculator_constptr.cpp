// FUNCTION: BF2 0x4e5980
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct TickCalculator {
    float m_step;
    int m_maxTicks;
    double m_last;
    double m_prev;
    double m_next;
    int compute(double time);
};

struct DemoRecorder {
    bool isRenderingSound() const;
    void updateTicks(int ticks);
    bool isOpenForPlayback() const;
};

struct Demo {
    void* m_vptr;
    TickCalculator* m_tickCalc;
    DemoRecorder* m_recorder;
    void updateTicks(float* param_2, int* param_3, int* param_4, float* param_5, TickCalculator const* param_6);
};

struct System {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual double getTickCount();
};
extern System* g_system;

void Demo::updateTicks(float* param_2, int* param_3, int* param_4, float* param_5, TickCalculator const* param_6) {
    if (m_recorder == 0) return;
    bool rendering = m_recorder->isRenderingSound();
    int ticks = m_tickCalc->compute(g_system->getTickCount());
    if (rendering) {
        *param_3 = 1;
        *param_2 = 1.0f / 30.0f;
    }
    if (*param_3 > param_6->m_maxTicks) {
        *param_3 = 1;
    }
    m_recorder->updateTicks(*param_3);
    if (m_recorder->isOpenForPlayback()) {
        *param_4 = ticks;
        *param_5 = m_tickCalc->m_step;
    }
}
}
}
