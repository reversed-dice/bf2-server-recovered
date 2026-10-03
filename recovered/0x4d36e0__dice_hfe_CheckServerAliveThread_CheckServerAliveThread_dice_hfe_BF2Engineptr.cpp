// FUNCTION: BF2 0x4d36e0
extern "C" void base_ctor_call(void*);
void fn_0x4d36e0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x10) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb38f90;
    *(int*)(p+0x18) = (int)(long)0x0;
    *(char*)(p+0x1c) = (char)(long)0x1;
}
// REVERSED_FUNCTION: dice_hfe_CheckServerAliveThread_CheckServerAliveThread_dice_hfe_BF2Engineptr (0x4d36e0)
