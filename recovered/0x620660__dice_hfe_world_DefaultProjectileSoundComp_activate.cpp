// FUNCTION: BF2 0x620660
namespace dice { namespace hfe {
void set_620660(void* self) {
    void* m = *(void**)((char*)self + 0x30);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x20))(m);
}
} }
