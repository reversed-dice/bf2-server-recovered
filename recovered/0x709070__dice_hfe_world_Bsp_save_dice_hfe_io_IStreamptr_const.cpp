// FUNCTION: BF2 0x709070
namespace dice { namespace hfe { namespace world {
extern bool fn_7106c0(void* a);
bool save_0x709070(void* self, void* a) {
    void* p = *(void**)((char*)self + 0x78);
    if (!p)
        return false;
    return fn_7106c0(p);
}
} } }
