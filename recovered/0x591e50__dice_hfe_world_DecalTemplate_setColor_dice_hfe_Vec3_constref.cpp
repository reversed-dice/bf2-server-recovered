// FUNCTION: BF2 0x591e50
// 0x591e50 dice_hfe_world_DecalTemplate_setColor_dice_hfe_Vec3_constref
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
    virtual void slot_call(const void* v);
};

struct Outer {
    char pad[0x70];
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
