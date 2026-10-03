// FUNCTION: BF2 0x82e6b0
namespace dice { namespace hfe {
extern int fn_407878(void* a);
extern void fn_82e1c0(void* a, void* b, void* c, int d);
void gpiAppendStringToBuffer_0x82e300(void* arg1, void* arg2, void* arg3) {
    int len = fn_407878(arg3);
    fn_82e1c0(arg1, arg2, arg3, len);
}
} }
