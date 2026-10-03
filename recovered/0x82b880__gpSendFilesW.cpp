// FUNCTION: BF2 0x82b880
namespace dice { namespace hfe {
extern void* fn_840a50(void* a);
extern int fn_82b250(void* a, void* b, int c, void* d, void* e, void* f);
extern void fn_83ef10(void* a);
int gpSendFilesW_0x82b880(void* self, void* arg2, int arg3, void* arg4, void* arg5, void* arg6) {
    if (!arg4) {
        return fn_82b250(self, arg2, arg3, 0, arg5, arg6);
    }
    void* p = fn_840a50(arg4);
    int n = fn_82b250(self, arg2, arg3, p, arg5, arg6);
    fn_83ef10(p);
    return n;
}
} }
