// FUNCTION: BF2 0x5aa660
namespace dice { namespace hfe {
bool cb_5aa660(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x430))(m);
}
} }
