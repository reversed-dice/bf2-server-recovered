// FUNCTION: BF2 0x5a7e50
typedef int (*vfnN)(void*);
extern "C" void helper_407e08(void*, void*, void*);
void* fn_0x5a7dd0(void* self, void* arg) {
    void* p = *(void**)((char*)arg + 0x80);
    int idx = ((vfnN)(*(void***)p)[0x50/8])(p);
    char buf;
    void* val = *(void**)(0xf678c0 + (long)idx*8);
    helper_407e08(self, val, &buf);
    return self;
}
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_getEmitPrio_const (0x5a7dd0)
