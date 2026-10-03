// FUNCTION: BF2 0x7eba90
namespace dice { namespace hfe {
extern void* fn_0x007f0430(void* self, int* v);
bool f_537880(void* self, int v) {
    void* end = fn_0x007f0430((char*)self + 0x20, &v);
    return (char*)self + 0x28 != end;
}
} }
