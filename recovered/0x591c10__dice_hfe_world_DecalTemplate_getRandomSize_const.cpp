// FUNCTION: BF2 0x591c10
// 0x591c10 dice_hfe_world_DecalTemplate_getRandomSize_const
// F1: virtual getter tail-call, fallback XORPS XMM0,XMM0
struct Inner {
    virtual void* s000();
    virtual void* s001();
    virtual void* s002();
    virtual void* s003();
    virtual void* s004();
    virtual float slot28();
};

struct Outer {
    char pad[0x70];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (!self->m_inner) return 0.0f;
    return self->m_inner->slot28();
}
