// FUNCTION: BF2 0x5ec7d0
extern "C" void base_ctor_call(void*);
void fn_0x5ec7d0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x90) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb70650;
    *(long*)(p+0x20) = (long)(long)0xb70838;
    *(int*)(p+0x88) = (int)(long)0x1;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultAmmoComp_DefaultAmmoComp_dice_hfe_world_DefaultAmmoCompTemplateptr (0x5ec7d0)
