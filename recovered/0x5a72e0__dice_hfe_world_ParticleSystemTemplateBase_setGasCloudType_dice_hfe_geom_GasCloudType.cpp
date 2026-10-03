// FUNCTION: BF2 0x5a72e0
// 0x5a72e0 dice_hfe_world_ParticleSystemTemplateBase_setGasCloudType_dice_hfe_geom_GasCloudType
// F2: setter delegue 2 virtuals null-check x2 + tail-call
struct Inner {
    virtual void* d000();
    virtual void* d001();
    virtual void* d002();
    virtual void slot_tail();
    virtual void* d004();
    virtual void* d005();
    virtual void* d006();
    virtual void* d007();
    virtual void* d008();
    virtual void* d009();
    virtual void* d010();
    virtual void* d011();
    virtual void* d012();
    virtual void* d013();
    virtual void* d014();
    virtual void* d015();
    virtual void* d016();
    virtual void* d017();
    virtual void* d018();
    virtual void* d019();
    virtual void* d020();
    virtual void* d021();
    virtual void* d022();
    virtual void* d023();
    virtual void* d024();
    virtual void* d025();
    virtual void* d026();
    virtual void* d027();
    virtual void* d028();
    virtual void* d029();
    virtual void* d030();
    virtual void* d031();
    virtual void* d032();
    virtual void* d033();
    virtual void* d034();
    virtual void* d035();
    virtual void* d036();
    virtual void* d037();
    virtual void* d038();
    virtual void* d039();
    virtual void* d040();
    virtual void* d041();
    virtual void* d042();
    virtual void* d043();
    virtual void* d044();
    virtual void* d045();
    virtual void* d046();
    virtual void* d047();
    virtual void* d048();
    virtual void* d049();
    virtual void* d050();
    virtual void* d051();
    virtual void* d052();
    virtual void* d053();
    virtual void* d054();
    virtual void* d055();
    virtual void* d056();
    virtual void* d057();
    virtual void* d058();
    virtual void* d059();
    virtual void* d060();
    virtual void* d061();
    virtual void* d062();
    virtual void* d063();
    virtual void* d064();
    virtual void* d065();
    virtual void* d066();
    virtual void* d067();
    virtual void* d068();
    virtual void* d069();
    virtual void* d070();
    virtual void* d071();
    virtual void* d072();
    virtual void* d073();
    virtual void* d074();
    virtual void* d075();
    virtual void slot_call(const void* v);
};

struct Outer {
    char pad[0x80];
    Inner* m_inner;
};

void Outer_set(Outer* self, const void* v) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        self->m_inner->slot_call(v);
        if (__builtin_expect(self->m_inner != 0, 1)) {
            self->m_inner->slot_tail();
        }
    }
}
