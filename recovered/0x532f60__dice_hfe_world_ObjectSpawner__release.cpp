// FUNCTION: BF2 0x532f60
class dice_hfe_world_ObjectSpawner {
    unsigned char pad_0x238[0x238];
public:
    unsigned int release();
};

unsigned int dice_hfe_world_ObjectSpawner::release() {
    unsigned int ref = *(unsigned int*)((char*)this + 0x238);
    --ref;
    *(unsigned int*)((char*)this + 0x238) = ref;
    if (ref == 0) {
        if (this) {
            reinterpret_cast<void (**)(dice_hfe_world_ObjectSpawner*)>(
                *reinterpret_cast<void**>(this)
            )[6](this);
        }
    }
    return ref;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner::release (0x532f60)