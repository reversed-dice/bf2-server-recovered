// FUNCTION: BF2 0x56af90
extern "C" void base_ctor_call(void*);
extern "C" void tail_helper(void*, unsigned, int);
void fn_0x56af90(void* self) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xb55ed0;
    *(long*)(p+0x10) = (long)0xb56370;
    *(long*)(p+0x68) = (long)0xb563a8;
    *(long*)(p+0x1c8) = (long)0xb56428;
    *(long*)(p+0x1f8) = (long)0xb56490;
    *(int*)(p+0x3d4) = (int)0x1;
    tail_helper(self, 0x40, 0);
}
// REVERSED_FUNCTION: dice_hfe_world_ZiplineContainerTemplate_ZiplineContainerTemplate (0x56af90)
