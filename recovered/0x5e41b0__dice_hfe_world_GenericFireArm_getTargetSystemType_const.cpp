// FUNCTION: BF2 0x5e41b0
extern "C" void* f_5e41b0(char* self) {
    char* p = *(char**)(self + 0x2c0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x168))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getTargetSystemType_const (0x5e41b0)
