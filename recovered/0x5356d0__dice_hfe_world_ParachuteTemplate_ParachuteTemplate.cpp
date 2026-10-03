// FUNCTION: BF2 0x5356d0
extern "C" void base_ctor_call(void*);
void fn_0x5356d0(void* self) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xb49df0;
    *(long*)(p+0x10) = (long)0xb4a290;
    *(long*)(p+0x68) = (long)0xb4a2c8;
    *(long*)(p+0x1c8) = (long)0xb4a348;
    *(long*)(p+0x1f8) = (long)0xb4a3b0;
    *(int*)(p+0xfc) |= 0x8;
}
// REVERSED_FUNCTION: dice_hfe_world_ParachuteTemplate_ParachuteTemplate (0x5356d0)
