// FUNCTION: BF2 0x6b0360
extern void* classManager;
namespace io { extern unsigned int IID_IMemStream; }
typedef void (*fn_release)(void*);
typedef void* (*fn_create)(void*, unsigned int, unsigned int, int);

extern "C" bool smartitf_create_6b0360(void** param_1, unsigned int param_2) {
    if (param_1[0] != 0) {
        void* obj = param_1[0];
        void* vtbl = *(void**)obj;
        fn_release f = *(fn_release*)((char*)vtbl + 0x10);
        f(obj);
    }
    void* vtbl2 = *(void**)classManager;
    fn_create f2 = *(fn_create*)((char*)vtbl2 + 0x68);
    void* result = f2(classManager, param_2, io::IID_IMemStream, 0);
    param_1[0] = result;
    return result != 0;
}
// REVERSED_FUNCTION: dice_hfe_SmartItf_dice_hfe_io_IMemStream_refdice_hfe_io_IID_IMemStream_create_unsigned_int (0x6b0360)
