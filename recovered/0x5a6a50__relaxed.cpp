// FUNCTION: BF2 0x5a6a50
namespace dice { namespace hfe {
void set_591fa0(void* self, float val) {
    void* m = *(void**)((char*)self + 0x80);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*, float))*(void**)((char*)v + 0x68))(m, val);
}
} }
