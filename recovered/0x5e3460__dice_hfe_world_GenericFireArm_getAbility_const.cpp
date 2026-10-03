// FUNCTION: BF2 0x5e3460
// 0x5e3460 dice_hfe_world_GenericFireArm_getAbility_const
// F1: virtual getter tail-call, fallback XORPS XMM0,XMM0
struct Inner {
    virtual void* s000();
    virtual void* s001();
    virtual void* s002();
    virtual void* s003();
    virtual void* s004();
    virtual void* s005();
    virtual void* s006();
    virtual void* s007();
    virtual void* s008();
    virtual void* s009();
    virtual float slot50();
};

struct Outer {
    char pad[0x2b0];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (!self->m_inner) return 0.0f;
    return self->m_inner->slot50();
}
