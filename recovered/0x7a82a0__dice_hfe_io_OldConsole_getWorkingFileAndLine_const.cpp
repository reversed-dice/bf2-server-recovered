// FUNCTION: BF2 0x7a82a0
namespace dice { namespace hfe { namespace io {
extern void fn_748c80(void* a, void* b, void* c, int d, ...);
void* getWorkingFileAndLine_0x7a82a0(void* out, void* src) {
    int line = *(int*)((char*)src + 0x230);
    void* p = ((void* (*)(void*))(*(void***)src)[0x24])(src);
    void* q = *(void**)p;
    fn_748c80(out, (void*)0xba8eb0, q, line);
    return out;
}
} } }
