// FUNCTION: BF2 0x5aae10
typedef int (*vfnN)(void*);
extern "C" void helper_407e08(void*, void*, void*);
void* fn_0x5aae10(void* self, void* arg) {
    unsigned idx = ((vfnN)(*(void***)arg)[0x280/8])(arg);
    char buf;
    void* val = *(void**)(0xf678e0 + (unsigned long)idx*8);
    helper_407e08(self, val, &buf);
    return self;
}
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_getDrawOrder_const (0x5aae10)
