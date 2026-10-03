// FUNCTION: BF2 0x6dfb30
namespace dice { namespace hfe {
bool cb_6dfb30(void* self) {
    void* m = *(void**)((char*)self + 0x28);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x198))(m);
}
} }
