// FUNCTION: BF2 0x7915e0
namespace dice { namespace hfe {
bool cb_4bbcf0(void* self) {
    void* m = *(void**)((char*)self + 0x10);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x170))(m);
}
} }
