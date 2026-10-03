// FUNCTION: BF2 0x610270
// 0x610270 dice_hfe_world_GenericProjectile_getExplosionRadius_const
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
    virtual void* s010();
    virtual void* s011();
    virtual void* s012();
    virtual void* s013();
    virtual void* s014();
    virtual void* s015();
    virtual float slot80();
};

struct Outer {
    char pad[0x268];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (!self->m_inner) return 0.0f;
    return self->m_inner->slot80();
}
