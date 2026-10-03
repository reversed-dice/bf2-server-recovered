// FUNCTION: BF2 0x793320
namespace dice { namespace hfe {
extern void* fn_0x793be0(void* self);
void* get_0x793320(void* self) {
    void* end = fn_0x793be0((char*)self + 0x8);
    void* r = 0;
    if ((char*)self + 0x10 != end) {
        char* node = *(char**)((char*)end + 0x28);
        r = *(void**)(node + 0x8);
    }
    return r;
}
} }
