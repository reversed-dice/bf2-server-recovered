// FUNCTION: BF2 0x591e10
// 0x591e10 dice_hfe_world_DecalTemplate_setRandomRotation_float
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
