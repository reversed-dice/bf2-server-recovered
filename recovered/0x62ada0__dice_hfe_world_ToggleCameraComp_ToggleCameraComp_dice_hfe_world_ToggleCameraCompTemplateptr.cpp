// FUNCTION: BF2 0x62ada0
extern "C" void base_ctor_call(void*);
void fn_0x62ada0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x40) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb80070;
    *(long*)(p+0x20) = (long)(long)0xb80220;
    *(int*)(p+0x30) = (int)(long)0x1;
    *(int*)(p+0x34) = (int)(long)0x0;
    *(long*)(p+0x38) = (long)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraComp_ToggleCameraComp_dice_hfe_world_ToggleCameraCompTemplateptr (0x62ada0)
