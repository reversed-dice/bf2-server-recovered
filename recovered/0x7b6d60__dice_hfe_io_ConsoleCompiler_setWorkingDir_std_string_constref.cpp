// FUNCTION: BF2 0x7b6d60
namespace dice { namespace hfe { namespace io {
extern void fn_7a3320(void* a, void* b, int c);
extern void fn_7a3000(void* a, int b);
void setWorkingDir_0x7b6d60(void* self, void* arg2) {
    long len = *(long*)((char*)*(void**)arg2 - 0x18);
    fn_7a3320(*(void**)self, (void*)0xbad7ee, 1);
    fn_7a3000(*(void**)self, len);
    fn_7a3320(*(void**)self, *(void**)arg2, len);
}
} } }
