// FUNCTION: BF2 0x59e110
namespace dice { namespace hfe {
void set_59e110(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    if (!m) return;
    void* v = *(void**)m;
    ((void(*)(void*))*(void**)((char*)v + 0x398))(m);
}
} }
