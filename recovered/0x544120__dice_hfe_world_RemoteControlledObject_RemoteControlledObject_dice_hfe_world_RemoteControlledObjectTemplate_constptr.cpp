// FUNCTION: BF2 0x544120
extern "C" void base_ctor_call(void*);
void fn_0x544120(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x240) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb4c910;
    *(long*)(p+0x100) = (long)(long)0xb4cc38;
    *(int*)(p+0x238) = (int)(long)0x1;
    *(int*)(p+0x248) = (int)(long)0xffffffff;
    *(long*)(p+0x250) = (long)(long)0x0;
    *(long*)(p+0x258) = (long)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject_RemoteControlledObject_dice_hfe_world_RemoteControlledObjectTemplate_constptr (0x544120)
