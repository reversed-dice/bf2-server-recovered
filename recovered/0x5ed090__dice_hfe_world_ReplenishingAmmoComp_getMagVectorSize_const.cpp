// FUNCTION: BF2 0x5ed090
struct Spawn { int m_0; };
struct W { char _0[0x3c]; int m_3c; char _1[0x2c]; float m_6c; };
struct Self { char _0[0x28]; Spawn* m_spawn; char _1[0x80]; W* m_w; };

int dice_hfe_world_ReplenishingAmmoComp_getMagVectorSize_const(void* p)
{
    Self* s = (Self*)p;
    if (s->m_spawn->m_0 == -1) return 1;
    if (s->m_w->m_3c == -1) return 1;
    int r = s->m_w->m_3c;
    if (s->m_w->m_6c != 0.0f) {
        float fv = ((float (*)(void*))(*(void***)p)[0x1e8/8])(p);
        r = (int)(fv / s->m_w->m_6c + 1.0f - (float)s->m_spawn->m_0);
    }
    int q = r < s->m_w->m_3c ? r : s->m_w->m_3c;
    if (q <= 0) return 1;
    return q;
}
