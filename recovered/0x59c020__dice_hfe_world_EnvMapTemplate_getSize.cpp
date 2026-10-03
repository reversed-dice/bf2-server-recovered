// FUNCTION: BF2 0x59c020
// 0x59c020 dice_hfe_world_EnvMapTemplate_getSize
// F1: virtual getter tail-call, fallback XORPS XMM0,XMM0
struct Inner {
    virtual void* s000();
    virtual void* s001();
    virtual float slot10();
};

struct Outer {
    char pad[0x1d0];
    Inner* m_inner;
};

float Outer_get(Outer* self) {
    if (!self->m_inner) return 0.0f;
    return self->m_inner->slot10();
}
