// FUNCTION: BF2 0x4bbcf0
namespace dice { namespace hfe {
bool cb_4bbd10(void* self) {
    void* m = *(void**)((char*)self + 0x228);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x278))(m);
}
} }
