// FUNCTION: BF2 0x5a5b50
namespace dice { namespace hfe {
void set_5a5b50(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x2d0))(m);
}
} }
