// FUNCTION: BF2 0x57cc80
extern "C" void base_ctor_call(void*);
void fn_0x57cc80(void* self) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xb588b0;
    *(long*)(p+0x10) = (long)0xb58b40;
    *(long*)(p+0x68) = (long)0xb58b78;
    *(long*)(p+0x1c8) = (long)0xb58bf8;
    *(int*)(p+0x1f4) = (int)0xbf800000;
    *(char*)(p+0xe8) |= 0x6;
}
// REVERSED_FUNCTION: dice_hfe_world_DynamicBundleTemplate_DynamicBundleTemplate (0x57cc80)
