// FUNCTION: BF2 0x6a6600
// getWeakPtr free-function form (trick 259), member at +0x8
struct WeakPtr { int m_refs; void* m_obj; };
struct IObjectTemplate { unsigned char pad[0x8]; WeakPtr* m_weak; };

extern void* operator new(unsigned long);

void** getWeakPtr(void** out, IObjectTemplate* self)
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
// BF2_FLAGS: -fno-strict-aliasing
