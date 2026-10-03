// FUNCTION: BF2 0x79f150
namespace dice { namespace hfe { namespace io {
extern void fn_79ea50(void* a, void* b, int c);
extern void fn_79efa0(void* a, int b);
bool setBuffer_0x79f150(void* self, void* arg2, int arg3) {
    fn_79ea50(self, arg2, arg3);
    fn_79efa0(self, arg3 * 8);
    return 1;
}
} } }
