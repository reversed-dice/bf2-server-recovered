// FUNCTION: BF2 0x7c4080
namespace dice { namespace hfe { namespace io {
extern void* fn_7c3d20();
extern void* fn_7c4390(void* a, void* b);
void* getNetWorkStats_0x7c4080(void* self) {
    void* p = fn_7c3d20();
    void* q = fn_7c4390(p, self);
    void* r = fn_7c3d20();
    if ((char*)r + 0x8 != q)
        return *(void**)((char*)q + 0x28);
    return 0;
}
} } }
