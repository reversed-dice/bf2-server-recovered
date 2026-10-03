// FUNCTION: BF2 0x591ec0
// 0x591ec0 dice_hfe_world_DecalTemplate_setUsedOnTransparentMaterials_bool
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
    virtual void slot_call(bool b);
};

struct Outer {
    char pad[0x70];
    Inner* m_inner;
};

void Outer_set(Outer* self, bool b) {
    if (__builtin_expect(self->m_inner != 0, 1)) {
        self->m_inner->slot_call(b);
        if (__builtin_expect(self->m_inner != 0, 1)) {
            self->m_inner->slot_tail();
        }
    }
}
