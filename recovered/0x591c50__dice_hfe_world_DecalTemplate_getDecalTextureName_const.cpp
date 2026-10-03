// FUNCTION: BF2 0x591c50
// 0x591c50 dice_hfe_world_DecalTemplate_getDecalTextureName_const
// F1: virtual getter tail-call, fallback MOV EAX,0x108fac0
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
    virtual unsigned int slota8();
};

struct Outer {
    char pad[0x70];
    Inner* m_inner;
};

unsigned int Outer_get(Outer* self) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        return self->m_inner->slota8();
    }
    return 0x108fac0;
}
