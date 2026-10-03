// FUNCTION: BF2 0x592130
// 0x592130 dice_hfe_world_DecalTemplate_setAnimationFrameWidthRelative_float
// F2: setter delegue 2 virtuals null-check x2 + tail-call
struct Inner {
    virtual void* d000();
    virtual void slot_tail();
    virtual void* d002();
    virtual void* d003();
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
    virtual void slot_call(float v);
};

struct Outer {
    char pad[0x70];
    Inner* m_inner;
};

void Outer_set(Outer* self, float v) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        self->m_inner->slot_call(v);
        if (__builtin_expect(self->m_inner != 0, 1)) {
            self->m_inner->slot_tail();
        }
    }
}
