// FUNCTION: BF2 0x76c050
namespace dice { namespace hfe {
bool cb_4bbcf0(void* self) {
    void* m = *(void**)((char*)self + 0x8);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0xc8))(m);
}
} }
