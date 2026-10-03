// FUNCTION: BF2 0x7e5b60
namespace dice { namespace hfe {
extern void* fn_0x007e7bd0(void* self);
void* get_7e5b60(void* self) {
    void* end = fn_0x007e7bd0((char*)self + 0x30);
    return (end != (char*)self + 0x38) ? (char*)end + 0x28 : 0;
}
} }
