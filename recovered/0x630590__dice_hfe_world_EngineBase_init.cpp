// FUNCTION: BF2 0x630590
// dice::hfe::world::EngineBase::init() -- 0x630590
//
// Base init, sound init, cache the first LightSource child at +0x318 when the
// object has one, disable the component at +0xe0, then look up the drive
// wheels into the weak-pointer pair at +0x320.

extern "C" void bundleInit_630590(void*);
extern "C" void initSound_630590(void*);
extern "C" void* findFirstMatchingChild_630590(void*, unsigned);
extern "C" void findDriveWheels_630590(void* out, void* unused, void* self);

typedef void (*FnDisable_630590)(void*, int);

extern "C" void init_630590(char* self)
{
    bundleInit_630590(self);
    initSound_630590(self);

    void* light = findFirstMatchingChild_630590(self, *(unsigned*)0xc7ce68);
    if (light != 0) *(void**)(self + 0x318) = light;

    void* comp = *(void**)(self + 0xe0);
    if (comp != 0) (*(FnDisable_630590*)(*(char**)comp + 0x80))(comp, 0);

    findDriveWheels_630590(self + 0x320, 0, self);
}
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_init (0x630590)
