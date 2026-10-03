// FUNCTION: BF2 0x5fead0
extern "C" void base_ctor_call(void*);
void fn_0x5fead0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x198) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb75190;
    *(long*)(p+0x20) = (long)(long)0xb75400;
    *(int*)(p+0x190) = (int)(long)0x1;
    *(long*)(p+0x1a0) = (long)(long)0x0;
    *(char*)(p+0x1a8) = (char)(long)0x1;
}
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireComp_SpawnObjectFireComp_dice_hfe_world_SpawnObjectFireCompTemplateptr (0x5fead0)
