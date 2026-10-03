// FUNCTION: BF2 0x5e9690
namespace dice { namespace hfe { namespace world {

extern "C" void* BundleTemplate_queryImplementation_unsigned_int(void*, unsigned);
void* fn_0x5e9690(void* self, unsigned type) {
    if (type == *(unsigned*)0xc7d02c || type == *(unsigned*)0xc7cf74) {
        return self;
    }
    return BundleTemplate_queryImplementation_unsigned_int(self, type);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_queryImplementation_unsigned_int (0x5e9690)
