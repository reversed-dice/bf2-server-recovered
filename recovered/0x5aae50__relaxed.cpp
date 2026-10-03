// FUNCTION: BF2 0x5aae50
typedef int (*vfnN)(void*);
extern "C" void helper_407e08(void*, void*, void*);
void* fn_0x59e320(void* self, void* arg) {
    unsigned idx = ((vfnN)(*(void***)arg)[0x268/8])(arg);
    char buf;
    void* val = *(void**)(0xf67920 + (unsigned long)idx*8);
    helper_407e08(self, val, &buf);
    return self;
}
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_getDrawOrder_const (0x59e320)
