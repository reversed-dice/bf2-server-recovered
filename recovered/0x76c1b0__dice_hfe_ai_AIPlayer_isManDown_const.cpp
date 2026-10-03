// FUNCTION: BF2 0x76c1b0
namespace dice { namespace hfe {
bool cb_76c1b0(void* self) {
    void* m = *(void**)((char*)self + 0x8);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x200))(m);
}
} }
