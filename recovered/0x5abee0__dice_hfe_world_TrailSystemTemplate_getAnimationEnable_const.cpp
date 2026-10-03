// FUNCTION: BF2 0x5abee0
namespace dice { namespace hfe {
bool cb_5abee0(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x3c0))(m);
}
} }
