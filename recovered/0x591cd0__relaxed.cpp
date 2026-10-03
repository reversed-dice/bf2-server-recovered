// FUNCTION: BF2 0x591cd0
namespace dice { namespace hfe {
bool cb_4bbcf0(void* self) {
    void* m = *(void**)((char*)self + 0x70);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0xb8))(m);
}
} }
