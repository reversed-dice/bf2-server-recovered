// FUNCTION: BF2 0x603c70
extern "C" void base_ctor_call(void*);
void fn_0x5440b0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x98) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb76610;
    *(long*)(p+0x20) = (long)(long)0xb767e8;
    *(int*)(p+0x80) = (int)(long)0x1;
    *(int*)(p+0x84) = (int)(long)0x0;
    *(long*)(p+0x88) = (long)(long)0x0;
    *(long*)(p+0x90) = (long)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject_RemoteControlledObject_dice_hfe_world_RemoteControlledObjectTemplate_constptr (0x5440b0)
