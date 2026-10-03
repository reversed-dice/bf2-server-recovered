// FUNCTION: BF2 0x5621d0
namespace dice { namespace hfe {
void set_5621d0(void* self) {
    void* m = *(void**)((char*)self + 0x278);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x20))(m);
}
} }
