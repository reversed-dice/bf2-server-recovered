// FUNCTION: BF2 0x7dee90
namespace dice { namespace hfe {
void set_7dee90(void* self) {
    void* m = *(void**)((char*)self + 0x40);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x88))(m);
}
} }
