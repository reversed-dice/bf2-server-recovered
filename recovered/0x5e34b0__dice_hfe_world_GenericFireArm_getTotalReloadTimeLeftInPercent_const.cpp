// FUNCTION: BF2 0x5e34b0
// 0x5e34b0 dice_hfe_world_GenericFireArm_getTotalReloadTimeLeftInPercent_const
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
    virtual void* s016();
    virtual void* s017();
    virtual void* s018();
    virtual void* s019();
    virtual void* s020();
    virtual void* s021();
    virtual void* s022();
    virtual void* s023();
    virtual void* s024();
    virtual void* s025();
    virtual void* s026();
    virtual void* s027();
    virtual void* s028();
    virtual void* s029();
    virtual void* s030();
    virtual void* s031();
    virtual void* s032();
    virtual void* s033();
    virtual void* s034();
    virtual void* s035();
    virtual void* s036();
    virtual void* s037();
    virtual void* s038();
    virtual void* s039();
    virtual void* s040();
    virtual void* s041();
    virtual void* s042();
    virtual float slot158();
};

struct Outer {
    char pad[0x2b0];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (!self->m_inner) return 0.0f;
    return self->m_inner->slot158();
}
