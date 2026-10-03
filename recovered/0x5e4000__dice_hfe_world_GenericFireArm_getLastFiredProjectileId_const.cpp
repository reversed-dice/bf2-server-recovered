// FUNCTION: BF2 0x5e4000
// 0x5e4000 dice_hfe_world_GenericFireArm_getLastFiredProjectileId_const
// F1: virtual getter tail-call, fallback MOV EAX,0xffffffff
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
    virtual void* s043();
    virtual void* s044();
    virtual void* s045();
    virtual void* s046();
    virtual void* s047();
    virtual void* s048();
    virtual void* s049();
    virtual void* s050();
    virtual void* s051();
    virtual void* s052();
    virtual void* s053();
    virtual void* s054();
    virtual void* s055();
    virtual void* s056();
    virtual void* s057();
    virtual void* s058();
    virtual void* s059();
    virtual void* s060();
    virtual void* s061();
    virtual void* s062();
    virtual void* s063();
    virtual void* s064();
    virtual void* s065();
    virtual void* s066();
    virtual unsigned int slot218();
};

struct Outer {
    char pad[0x290];
    Inner* m_inner;
};

unsigned int Outer_get(Outer* self) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        return self->m_inner->slot218();
    }
    return 0xffffffff;
}
