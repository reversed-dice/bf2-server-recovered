// FUNCTION: BF2 0x507060
extern "C" void base_ctor_5767f0(void*);
void fn_0x507060(void* self) {
    base_ctor_5767f0(self);
    char* p = (char*)self;
    *(long*)(p) = 0xb3c9f0;
    *(long*)(p+0x10) = 0xb3cc80;
    *(long*)(p+0x68) = 0xb3ccb8;
    *(long*)(p+0x1c8) = 0xb3cd38;
    *(int*)(p+0x1f4) = 1;
    *(int*)(p+0x1f8) = 0;
    *(int*)(p+0x1fc) = 0xffffffff;
    *(char*)(p+0x200) = 0;
    *(int*)(p+0x204) = 0;
    *(long*)(p+0x208) = 0xf6c6e8;
    *(char*)(p+0x210) = 1;
    *(char*)(p+0x211) = 1;
}
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectAreaTemplate_AmbientEffectAreaTemplate (0x507060)
