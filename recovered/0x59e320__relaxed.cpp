// FUNCTION: BF2 0x59e320
typedef int (*vfnN)(void*);
extern "C" void helper_407e08(void*, void*, void*);
void* fn_0x59e450(void* self, void* arg) {
    unsigned idx = ((vfnN)(*(void***)arg)[0x280/8])(arg);
    char buf;
    void* val = *(void**)(0xf678e0 + (unsigned long)idx*8);
    helper_407e08(self, val, &buf);
    return self;
}
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_getBlendMode_const (0x59e450)
