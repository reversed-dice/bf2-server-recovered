// FUNCTION: BF2 0x68c410
extern "C" void base_ctor_68c300(void*, void*);
extern "C" void* helper_69a1e0(void*);
void fn_0x68c410(void* self, void* unused1, void* arg3) {
    base_ctor_68c300(self, unused1);
    char* p = (char*)self;
    *(long*)p = 0xb8e130;
    void* r = helper_69a1e0(arg3);
    *(void**)(p + 0x10) = r;
}
// REVERSED_FUNCTION: dice_hfe_world_RootObjectIgnorePredicator_RootObjectIgnorePredicator_unsigned_int_dice_hfe_world_IObjectptr (0x68c410)
