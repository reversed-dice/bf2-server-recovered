// FUNCTION: BF2 0x5feb90
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5feb30(void*, void*);
void* fn_0x5feb90(void* self) {
    void* p = alloc_0x407508(0x1b0);
    ctor_0x5feb30(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireCompTemplate_createComponent (0x5feb90)
