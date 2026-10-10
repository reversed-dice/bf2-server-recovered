// FUNCTION: BF2 0x6866c0
struct WeakPtr {
    int m_refs;
    void* m_obj;
};

struct IObject {
    unsigned char pad[0xf8];
    WeakPtr* m_weak;
};

void** getWeakPtr(void** out, IObject* self)
{
    WeakPtr* w = self->m_weak;
    if (w == 0) {
        w = (WeakPtr*)operator new(0x10);
        w->m_refs = 1;
        w->m_obj = self;
        self->m_weak = w;
    }
    *out = w;
    w->m_refs = w->m_refs + 1;
    return out;
}

extern void* operator new(unsigned long);

// BF2_FLAGS: -fno-strict-aliasing
// REVERSED_FUNCTION: dice_hfe_world_IObject_getWeakPtr (0x6866c0)
