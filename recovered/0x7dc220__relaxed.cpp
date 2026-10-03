// FUNCTION: BF2 0x7dc220
namespace dice { namespace hfe {
bool cb_4bbcf0(void* self) {
    void* m = *(void**)((char*)self + 0x20);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x48))(m);
}
} }
