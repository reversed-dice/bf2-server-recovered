// FUNCTION: BF2 0x82ba20
namespace dice { namespace hfe {
extern void* fn_840a50(void* a);
extern int fn_82b930(void* a, int b, void* c);
extern void fn_83ef10(void* a);
int gpAcceptTransferW_0x82ba20(void* self, int arg2, void* arg3) {
    if (arg3) {
        void* p = fn_840a50(arg3);
        int r = fn_82b930(self, arg2, p);
        fn_83ef10(p);
        return r;
    }
    return fn_82b930(self, arg2, 0);
}
} }
