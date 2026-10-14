// FUNCTION: BF2 0x6303e0
// dice::hfe::world::EngineBase::reset() -- 0x6303e0

extern "C" void setIsRunning_6303e0(void*, bool, bool, bool);
extern "C" void updateEngineSound_6303e0(void*);

extern "C" void reset_6303e0(char* self)
{
    float z = 0.0f;

    *(float*)(self + 0x2cc) = z;
    *(float*)(self + 0x2d0) = z;
    *(float*)(self + 0x2d4) = z;
    *(float*)(self + 0x2e8) = z;
    *(float*)(self + 0x2d8) = z;
    *(float*)(self + 0x2dc) = z;
    *(float*)(self + 0x2e0) = z;
    *(float*)(self + 0x2e4) = z;
    *(float*)(self + 0x2f8) = z;
    *(float*)(self + 0x2ec) = z;
    *(float*)(self + 0x300) = z;
    *(float*)(self + 0x328) = z;
    *(float*)(self + 0x308) = -1.0f;
    *(char*)(self + 0x2c8) = 0;
    *(char*)(self + 0x2c9) = 0;
    *(int*)(self + 0x2fc) = 1;
    *(char*)(self + 0x2f0) = 0;
    *(int*)(self + 0x2f4) = 0;
    *(int*)(self + 0x304) = 0;
    *(void**)(self + 0x318) = 0;
    *(char*)(self + 0x32c) = 0;

    setIsRunning_6303e0(*(void**)(self + 0x310), false, true, false);
    updateEngineSound_6303e0(self);

    *(char*)(self + 0x296) = 1;
    (*(void (**)(void*, int, int))(*(char**)self + 0xc0))(self, 0, 0x800);

    void* comp = *(void**)(self + 0xe0);
    if (comp != 0) (*(void (**)(void*, int))(*(char**)comp + 0x80))(comp, 0);
}
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_reset (0x6303e0)
