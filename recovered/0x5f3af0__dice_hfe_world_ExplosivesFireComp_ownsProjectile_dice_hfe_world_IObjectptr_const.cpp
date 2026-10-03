// FUNCTION: BF2 0x5f3af0
namespace dice { namespace hfe {
extern void* fn_0x005f4fb0(void* self, void** v);
bool f_5f3af0(void* self, void* v) {
    void* end = fn_0x005f4fb0((char*)self + 0x178, &v);
    return (char*)self + 0x180 != end;
}
} }
