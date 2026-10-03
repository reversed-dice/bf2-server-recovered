// FUNCTION: BF2 0x78bfc0
namespace dice { namespace hfe {
void set_78bfc0(void* self) {
    void* m = *(void**)((char*)self + 0x48);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0xc0))(m);
}
} }
