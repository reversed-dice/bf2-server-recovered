// FUNCTION: BF2 0x709070
namespace dice { namespace hfe {
extern bool fn_0x4f4ad0(void* p);
bool quit_0x4f1e90(void* self) {
    void* m = *(void**)((char*)self + 0x78);
    if (m) return fn_0x4f4ad0(m);
    return false;
}
} }
