// FUNCTION: BF2 0x5be590
namespace dice { namespace hfe {
bool cb_5be590(void* self) {
    void* m = *(void**)((char*)self + 0x10);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0xb8))(m);
}
} }
