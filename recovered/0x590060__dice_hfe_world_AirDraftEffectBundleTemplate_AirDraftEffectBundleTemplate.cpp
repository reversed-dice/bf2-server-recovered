// FUNCTION: BF2 0x590060
// 0x590060 - AirDraftEffectBundleTemplate constructor twin
extern "C" void fn_58b960(void*);
extern "C" void fn_598c00(void*);

void fn_0x590060(void* self) {
    fn_58b960(self);
    fn_598c00((char*)self + 0x1c8);
    
    *(void**)self = (void*)0xb5d4f0;
    *(void**)((char*)self + 0x10) = (void*)0xb5d728;
    *(void**)((char*)self + 0x68) = (void*)0xb5d760;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5d7e0;
    *(void**)((char*)self + 0x328) = (void*)0xf6c6e8;
    *(float*)((char*)self + 0x338) = 0.0f;
    *(float*)((char*)self + 0x334) = 0.0f;
    *(float*)((char*)self + 0x330) = 0.0f;
    *(char*)((char*)self + 0x33c) = 0;
}
