// FUNCTION: BF2 0x76c170
namespace dice { namespace hfe {
bool cb_76c170(void* self) {
    void* m = *(void**)((char*)self + 0x8);
    void* v = *(void**)m;
    return ((bool(*)(void*))*(void**)((char*)v + 0xd8))(m);
}
} }
