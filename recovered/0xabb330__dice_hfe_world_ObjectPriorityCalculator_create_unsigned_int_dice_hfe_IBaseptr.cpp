// FUNCTION: BF2 0xabb330
extern "C" void* op_new_407508(unsigned long);
typedef void* (*query_t)(void*, unsigned);
typedef void (*vfn10)(void*);
void* fn_0xabb330(unsigned classId, void* param2) {
    void* result = 0;
    if (param2 != 0) goto done;
    {
        void* obj = op_new_407508(0x10);
        *(long*)((char*)obj) = 0xb8ec70;
        *(int*)((char*)obj + 8) = 1;
        result = (*(query_t*)0xb8ec88)(obj, classId);
        if (!result) {
            void** vt = *(void***)obj;
            ((vfn10)vt[0x10/8])(obj);
            result = 0;
        }
    }
done:
    return result;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectPriorityCalculator_create_unsigned_int_dice_hfe_IBaseptr (0xabb330)
