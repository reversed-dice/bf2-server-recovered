// FUNCTION: BF2 0x59c040
namespace dice { namespace hfe {
void set_591fa0(void* self, float val) {
    void* m = *(void**)((char*)self + 0x1d0);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*, float))*(void**)((char*)v + 0x8))(m, val);
}
} }
