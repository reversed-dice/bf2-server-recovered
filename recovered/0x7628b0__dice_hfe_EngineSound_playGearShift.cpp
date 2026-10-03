// FUNCTION: BF2 0x7628b0
namespace dice { namespace hfe {
void set_7628b0(void* self) {
    void* m = *(void**)((char*)self + 0x28);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x20))(m);
}
} }
