// FUNCTION: BF2 0x734010
namespace dice { namespace hfe {
extern int fn_4071b8(void* a);
extern void fn_407b88(void* a);
void* getIdentity_0x734010(void) {
    if (*(char*)0x010a5020)
        return (void*)0x10a5030;
    if (fn_4071b8((void*)0x10a5020)) {
        *(float*)0x010a5030 = 1.0f;
        *(float*)0x010a5034 = 1.0f;
        *(float*)0x010a5038 = 1.0f;
        fn_407b88((void*)0x10a5020);
    }
    return (void*)0x10a5030;
}
} }
