// FUNCTION: BF2 0x610360
// 0x610360 dice_hfe_world_GenericProjectile_getFlashbangBillboardMaxRampTime_const
// F1: virtual getter tail-call, fallback MOVSS XMM0,dword ptr [0x00b7b1c0]
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
    virtual float slot108();
};

struct Outer {
    char pad[0x268];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        return self->m_inner->slot108();
    }
    return *((const float*)0x00b7b1c0);
}
