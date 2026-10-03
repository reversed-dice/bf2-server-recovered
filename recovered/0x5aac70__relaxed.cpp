// FUNCTION: BF2 0x5aac70
namespace dice { namespace hfe {
void set_591fa0(void* self, float val) {
    void* m = *(void**)((char*)self + 0x80);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*, float))*(void**)((char*)v + 0x4c8))(m, val);
}
} }
