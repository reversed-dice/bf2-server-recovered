// FUNCTION: BF2 0x7eba60
namespace dice { namespace hfe {
extern void* fn_0x007f03e0(void* self, int* v);
bool f_7eba60(void* self, int v) {
    void* end = fn_0x007f03e0((char*)self + 0x50, &v);
    return (char*)self + 0x58 != end;
}
} }
