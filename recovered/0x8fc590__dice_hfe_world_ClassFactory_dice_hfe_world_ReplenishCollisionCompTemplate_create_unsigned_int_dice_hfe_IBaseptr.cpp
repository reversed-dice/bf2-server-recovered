// FUNCTION: BF2 0x8fc590
extern "C" void* op_new_407508(unsigned long);
extern "C" void ctor_call(void*);
typedef void* (*vfn18)(void*, unsigned);
typedef void (*vfn10)(void*);
void* fn_0x8fc590(unsigned classId, void* param2) {
    void* result = 0;
    if (param2 != 0) goto done;
    {
        void* obj = op_new_407508(0x20);
        ctor_call(obj);
        result = ((vfn18)(*(void***)obj)[0x18/8])(obj, classId);
        if (!result) {
            ((vfn10)(*(void***)obj)[0x10/8])(obj);
            result = 0;
        }
    }
done:
    return result;
}
// REVERSED_FUNCTION: dice_hfe_world_ClassFactory_dice_hfe_world_ReplenishCollisionCompTemplate_create_unsigned_int_dice_hfe_IBaseptr (0x8fc590)
