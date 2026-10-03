// FUNCTION: BF2 0x59e030
extern "C" void* f_59e030(char* self) {
    char* p = *(char**)(self + 0x80);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x3d0))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_getParticleBlendModeEnum_const (0x59e030)
