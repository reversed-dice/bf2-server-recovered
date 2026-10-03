// FUNCTION: BF2 0x6b63f0
namespace dice { namespace anim {
extern void* fn_6b63b0(void* a, void* b);
float getAnimationLength_0x6b63f0(void* self, void* s) {
    void* r = fn_6b63b0(self, s);
    if (r == self)
        return -1.0f;
    return *(float*)((char*)*(void**)((char*)r + 0x18) + 8);
}
} }
