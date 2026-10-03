// FUNCTION: BF2 0x591fa0
namespace dice { namespace hfe {
void set_59c040(void* self, float val) {
    void* m = *(void**)((char*)self + 0x70);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*, float))*(void**)((char*)v + 0x30))(m, val);
}
} }
