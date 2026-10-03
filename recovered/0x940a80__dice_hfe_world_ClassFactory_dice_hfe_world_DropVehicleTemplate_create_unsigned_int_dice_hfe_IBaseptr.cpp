// FUNCTION: BF2 0x940a80
extern "C" void* op_new_407508(unsigned long);
extern "C" void ctor_call(void*);
typedef void* (*query_t)(void*, unsigned);
typedef void (*vfn10)(void*);
void* fn_0x940a80(unsigned classId, void* param2) {
    void* result = 0;
    if (param2 != 0) goto done;
    {
        void* obj = op_new_407508(0x1d0);
        ctor_call(obj);
        *(long*)((char*)obj) = 0xc11b50;
        *(long*)((char*)obj + 0x10) = 0xc11d88;
        *(long*)((char*)obj + 0x68) = 0xc11dc0;
        *(int*)((char*)obj + 0x1c8) = 0x1e;
        result = (*(query_t*)0xc11b68)(obj, classId);
        if (!result) {
            void** vt = *(void***)obj;
            ((vfn10)vt[0x10/8])(obj);
            result = 0;
        }
    }
done:
    return result;
}
// REVERSED_FUNCTION: dice_hfe_world_ClassFactory_dice_hfe_world_DropVehicleTemplate_create_unsigned_int_dice_hfe_IBaseptr (0x940a80)
