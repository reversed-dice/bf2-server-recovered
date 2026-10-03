// FUNCTION: BF2 0x562200
namespace dice { namespace hfe {
void set_562200(void* self) {
    void* m = *(void**)((char*)self + 0x280);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x20))(m);
}
} }
