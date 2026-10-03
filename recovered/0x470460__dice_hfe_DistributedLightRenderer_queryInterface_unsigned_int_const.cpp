// FUNCTION: BF2 0x470460
namespace dice { namespace hfe {
void* f_8031e0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19e0, 0) ? self : 0;
}
} }

// REVERSED_FUNCTION: dice_hfe_DistributedLightRenderer_queryInterface_unsigned_int_const (0x470460)
