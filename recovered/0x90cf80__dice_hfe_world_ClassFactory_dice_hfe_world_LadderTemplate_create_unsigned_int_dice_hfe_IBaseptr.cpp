// FUNCTION: BF2 0x90cf80
extern "C" void* op_new_407508(unsigned long);
extern "C" void ctor_call(void*);
typedef void* (*query_t)(void*, unsigned);
typedef void (*vfn10)(void*);
void* fn_0x90cf80(unsigned classId, void* param2) {
    void* result = 0;
    if (param2 != 0) goto done;
    {
        void* obj = op_new_407508(0x1d8);
        ctor_call(obj);
        *(long*)((char*)obj) = 0xb45c50;
        *(long*)((char*)obj + 0x10) = 0xb45e88;
        *(long*)((char*)obj + 0x68) = 0xb45ec0;
        *(int*)((char*)obj + 0x1c8) = 1;
        *(long*)((char*)obj + 0x1d0) = 0;
        result = (*(query_t*)0xb45c68)(obj, classId);
        if (!result) {
            void** vt = *(void***)obj;
            ((vfn10)vt[0x10/8])(obj);
            result = 0;
        }
    }
done:
    return result;
}
// REVERSED_FUNCTION: dice_hfe_world_ClassFactory_dice_hfe_world_LadderTemplate_create_unsigned_int_dice_hfe_IBaseptr (0x90cf80)
