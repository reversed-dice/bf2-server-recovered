// FUNCTION: BF2 0x5a7b50
namespace dice { namespace hfe {
bool cb_5a7b50(void* self) {
    void* m = *(void**)((char*)self + 0x80);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x390))(m);
}
} }
