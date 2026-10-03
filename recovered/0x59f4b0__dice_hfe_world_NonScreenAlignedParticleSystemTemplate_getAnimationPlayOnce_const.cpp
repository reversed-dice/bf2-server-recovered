// FUNCTION: BF2 0x59f4b0
namespace dice { namespace hfe {
bool cb_59f4b0(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x410))(m);
}
} }
