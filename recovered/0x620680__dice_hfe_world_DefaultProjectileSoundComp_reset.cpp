// FUNCTION: BF2 0x620680
namespace dice { namespace hfe {
void set_620680(void* self) {
    void* m = *(void**)((char*)self + 0x30);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x60))(m);
}
} }
