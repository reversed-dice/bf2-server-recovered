// FUNCTION: BF2 0x5bf270
namespace dice { namespace hfe {
bool cb_5bf270(void* self) {
    void* m = *(void**)((char*)self + 0x10);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0x168))(m);
}
} }
