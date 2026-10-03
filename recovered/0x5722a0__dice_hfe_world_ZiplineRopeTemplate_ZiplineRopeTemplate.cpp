// FUNCTION: BF2 0x5722a0
extern "C" void base_ctor_call(void*);
extern "C" void tail_helper(void*, unsigned, int);
void fn_0x5722a0(void* self) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xb54c30;
    *(long*)(p+0x10) = (long)0xb54e68;
    *(long*)(p+0x68) = (long)0xb54ea0;
    *(int*)(p+0x1c8) = (int)0x1;
    *(long*)(p+0x1d0) = (long)0xf6c6e8;
    *(int*)(p+0x1d8) = (int)0x3f800000;
    tail_helper(self, 0x40, 0);
}
// REVERSED_FUNCTION: dice_hfe_world_ZiplineRopeTemplate_ZiplineRopeTemplate (0x5722a0)
