// FUNCTION: BF2 0x5698f0
extern "C" void base_ctor_call(void*);
void fn_0x5698f0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x238) = (long)templatePtr;
    *(long*)(p+0x0) = 0xb53f70;
    *(long*)(p+0x100) = 0xb54280;
}
// REVERSED_FUNCTION: dice_hfe_world_UAVVehicle_UAVVehicle_dice_hfe_world_UAVVehicleTemplate_constptr (0x5698f0)
