// FUNCTION: BF2 0x5aaca0
namespace dice { namespace hfe {
void set_5aaca0(void* self, float val) {
    void* m = *(void**)((char*)self + 0x80);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*, float))*(void**)((char*)v + 0x4d8))(m, val);
}
} }
