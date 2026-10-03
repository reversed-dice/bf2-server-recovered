// FUNCTION: BF2 0x6879d0
namespace dice { namespace hfe {
void set_6879d0(void* self) {
    void* m = *(void**)((char*)self + 0x70);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x1c8))(m);
}
} }
