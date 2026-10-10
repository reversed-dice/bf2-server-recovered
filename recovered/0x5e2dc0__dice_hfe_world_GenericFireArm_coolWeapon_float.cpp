// FUNCTION: BF2 0x5e2dc0
extern "C" int WorldPref_getTickCount();
extern "C" void* gameLogic;

struct Aux { char _0[0x23c]; float f23c; };

struct FA {
    char _0[0x2f8];
    float m_2f8;
    float m_2fc;
    int m_300;
    char _1[0x2c];
    Aux* m_330;
};

void dice_hfe_world_GenericFireArm_coolWeapon_float(void* self, float dt)
{
    FA* s = (FA*)self;
    unsigned int dtms = (unsigned int)(WorldPref_getTickCount() - s->m_300);
    float delta = (float)dtms / 30.0f * s->m_330->f23c;
    float v = s->m_2fc - delta;
    s->m_2f8 = v;
    if (v < 0.0f) s->m_2f8 = 0.0f;
    void* gl = gameLogic;
    if (((unsigned char (*)(void*))(*(void***)gl)[0x278/8])(gl)) {
        s->m_2fc = s->m_2f8;
        s->m_300 = WorldPref_getTickCount();
    }
}
